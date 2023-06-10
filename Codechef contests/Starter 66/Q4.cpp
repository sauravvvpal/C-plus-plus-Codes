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
        if(cnt%k!=0){
            sum=sum+n*(k-1);
            cnt+3;
            flag=0;
            cout<<sum<<" ";
        }
        else {
            sum=sum+n+m;
            cnt++;
            flag=1;
            cout<<sum<<" ";
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