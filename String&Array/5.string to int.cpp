#include<iostream>
using namespace std;
int main(){
    string str;
    int n=0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        n=(str[i]-'0')+n*10;
    }
    cout<<n<<endl;
    return 0;
}
