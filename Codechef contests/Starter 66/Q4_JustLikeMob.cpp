#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m,k,x;
    cin>>n>>m>>k>>x;
    int cnt=1;
    int sum=0;
    bool flag=0;
    while(sum<x){
        if(cnt%k==0){
            sum=sum+n+m;
            cnt++;
            flag=1;
        }
        else{
            sum=sum+n;
            cnt++;
            flag=0;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}
return 0;
}