#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>m; ///not sorted(Hashing) log(1)/o(n) in case of collision
    m.max_load_factor(0.25);//for CF
    m.reserve(1024);//for CF to avoid collision /TLE
}
