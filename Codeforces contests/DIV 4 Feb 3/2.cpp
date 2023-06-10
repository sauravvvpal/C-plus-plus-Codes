#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int j=0;
    bool check=0;
    for(int k=0;k<s.size();k++){
 
        if(s[k]=='L'){
        i--;
        if(i==1 && j==1){
         check=1;
         break;
         }
        }
 
         else if(s[k]=='R'){
         i++;
         if(i==1 && j==1){
         check=1;
         break;
         }
         }
         else if(s[k]=='U'){
         j++;
         if(i==1 && j==1){
         check=1;
         break;
         }
         }
         else if(s[k]=='D'){
         j--;
         if(i==1 && j==1){
         check=1;
         break;
         }
         }   
       }
      if(check==1)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl; 
}
return 0;
}