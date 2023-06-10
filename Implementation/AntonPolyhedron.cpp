#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
int n;
cin>>n;
int res=0;
while(n--){
    string s;
    cin>>s;
    res+=mp[s];

    }
    cout<<res<<endl;

return 0;
}