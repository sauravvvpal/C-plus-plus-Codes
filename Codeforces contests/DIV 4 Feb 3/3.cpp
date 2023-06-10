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
    int j=s.size()-1;
    int ans_i;
    int ans_j;
    while(i<=j){
       if(s[i]=='0' && s[j]=='1' || s[i]=='1' && s[j]=='0'){
        i++;
        j--;
       }
       else
       break;
    }
    if(i>j){
        cout<<0<<endl;
    }
    else if(i==j){
        cout<<1<<endl;
    }
    else
    cout<<j-i+1<<endl;

}
return 0;
}