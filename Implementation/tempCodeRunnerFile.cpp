#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
string ans="";
for(int i=0;i<s.length();i++){
    ans+=s[(i*(i+1))/2];
    if((i*(i+1))/2>=s.length())
    break;
}
cout<<ans<<endl;
return 0;
}