#include <bits/stdc++.h>
using namespace std;
/*          phi(n)      = gcd(a,n)==1 [ 1<= a <= n ]
                        = n-(num of divisors of n)

            phi(prime)  = prime-1;
            phi(prime^n)= (prime^n) * ((prime-1)/prime)
            
            phi(a*b)    = phi(a)*phi(b) [if(gcd(a,b)==1)]

            phi(n)      = phi(p1^a1 * p2^a2 * ... ... * pn^an)
                        = phi(p1^a1) * phi(p2^a2) * ... * phi(pn^an)
                        = p1^a1((p1-1)/p1) * p2^a2((p2-1)/p2) ... ... pn^an((pn-1)/pn)
                        = (p1^a1 * p2^a2 * ... ... * pn^an) * (((p1-1)/p1) * ((p2-1)/p2) * ... * ((pn-1)/pn))
                        = n * (((p1-1)/p1) * ((p2-1)/p2) * ... * ((pn-1)/pn))
                        
            phi(100)    = phi(2^2 * 5^2)
                        = 100 * ((2-1)/2) * ((5-1)/5)
                        = 100 * 1/2 * 4/5
                        = 40

            gcd(a,n)=1 [1<=a<=n] --->phi(n)
            gcd(a,n)=x [1<=a<=n] --->gcd(a/x,n/x)=1 ---->phi(n/x)

            n-> divisor of n = d1,d2,d3 ... dn
                phi(d1)+phi(d2)+phi(d3) + ... + phi(dn) == n

            gcd(a,15) divisor's of 15 = 1  (8 times) phi(15/1) = phi(15) = 8 
                                        3  (4 times) phi(15/3) = phi(5) = 4
                                        5  (2 times) phi(15/5) = phi(3) = 2
                                        15 (1 times) phi(15/15) =phi(1) = 1
            
            phi(1)+phi(3)+phi(5)+phi(15)
                1 +  2   +  4   +   8   = 15

            summation of[ gcd(a,n) ] for all a [1<=a<=n]] = summation of [ d * phi(n/d) ] for all divisor of n 

            summation of[ gcd(a,15)] :
            [1 * phi(15/1)] + [3* phi(15/3)] + [5* phi(15/5)] + [15 * phi(15/15)] 
                (1*8)       +     (3*4)      +     (5*2)      +       (15*1)        
                    8       +       12       +       10       +         15       = 45

            summation of[ n / gcd(a,n)] for all a [1<=a<=n]] = summation of[n/d * phi(n/d)] for all divisor of n  // n*log(n) + sqrt(n)

            summation of[ 6 / gcd(a,6)] for all a [1<=a<=n]] = 
                            1   6/gcd(1,6)  = 6
                            2   6/gcd(2,6)  = 3
                            3   6/gcd(3,6)  = 2
                            6   6/gcd(6,6)  = 1

            gcd(a,6)
            n/ gcd(1,n) + n/ gcd(2,n) + n/ gcd(3,n) + n/ gcd(6,n)
            6*phi(6/1)  + 3*phi(6/2)  +   2*(6/3)   + 1*phi(6/6)


            Sum of all co-prime numbers not greater than n: [n* (phi(n/1)/2)]

            15--> 15*(phi(15/1)/2) = 15*(8/2) = 15*4 = 60

            gcd(x,n) = gcd(n-x,n) 

     */
void bruteforce() //! 1. brute force : O(n* log(n))
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (__gcd(i, n) == 1)
        {
            c++;
        }
    }
    cout << c << endl;
}
void primefactor() //! 2. Prime Factorization : sqrt(n)
{
    int n;
    cin >> n;
    int total = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            total = (total / i) * (i - 1);
            while (n % i == 0)
            {
                n = n / i;
            }
        }
    }
    if (n > 1)
    {
        total = total / n;
        total = total * (n - 1);
    }
    cout << total << endl;
}
int phi[10000000];
bool visit[10000000];
void seivemethode() //! 3. sieve method : n * nlog
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (visit[i])
            continue;
        for (int j = i; j <= n; j += i)
        {
            visit[j] = true;
            phi[j] = phi[j] / i;
            phi[j] = phi[j] * (i - 1);
        }
    }
    cout << phi[n] << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif
    // bruteforce();
    // primefactor();
    // seivemethode();
}
