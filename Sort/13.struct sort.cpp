#include<bits/stdc++.h>
using namespace std;
struct student{
int roll,marks;
string name;
};
bool cmp(student a,student b){
    if(a.marks>b.marks) return true;
    else if(a.marks== b.marks){
        if(a.roll>b.roll)return false;
        else return true;
    }
    else return false;
}
int main(){
    freopen("in2.txt","r",stdin);
student info[100];
int n;
cin>>n;
cin.ignore();
for(int i=0;i<n;i++){
    cin>>info[i].name;
    cin>>info[i].roll;
    cin>>info[i].marks;
}
sort (info,info+n,cmp);
for(int i=0;i<n;i++){
    cout<<info[i].name<<" ";
    cout<<info[i].roll<<" ";
    cout<<info[i].marks<<endl;
}
return 0;
}
