#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
string ans;
for(int i=0,k=1;i<s.length();){
    ans+=s[i];
    i+=k;
    k++;
    
}
cout<<ans<<endl;
return 0;
}