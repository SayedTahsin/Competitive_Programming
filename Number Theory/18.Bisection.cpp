/*1. f(x) is continuous function in interval[a,b]
2. f(a)*f(b)<0
_________________________
1. find c=(a+b)/2
2. if(f(c)==0)-> c is the root of the function.
3. else if (f(a)*f(c)<0 so root is beetween a and c -> (c=(a+c)/2))
4. else if (f(b)*f(c)<0 so root is beetween b and c -> (c=(b+c)/2))
5. else (given function doesn’t follow one of assumptions)
*/

#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01
/// Bisection Method. The function is x^3 - x^2  + 2
double func(double x)
{
    return x*x*x - x*x + 2;
}

void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;
    while ((b-a) >= EPSILON)
    {
        c = (a+b)/2;

        if (func(c) == 0.0)
            break;
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}
int main()
{

    double a =-200, b = 300;
    bisection(a, b);
    return 0;
}
