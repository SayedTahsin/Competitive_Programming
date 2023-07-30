#include<bits/stdc++.h>
using namespace std;
///1 -> 1
///2 -> 4 8 6 2
///3 -> 9 7 1 3
///4 -> 6 4
///5 -> 5
///6 -> 6
///7 -> 9 3 1 7
///8 -> 6 8 4 2
///9 -> 1 9
int main()
{
    int n;
    cin>>n;
    int total=1;
    int power=5;
    for(int i=1; i<=power; i++)
        total*=n;
    cout<<total<<endl;
}
