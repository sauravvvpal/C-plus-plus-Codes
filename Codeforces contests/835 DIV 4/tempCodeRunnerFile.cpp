#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int secondmax=0;
    for(int i=0;i<n;i++){
        if(arr[i]==mx){
           continue;
        }
        else{
            secondmax=max(secondmax,arr[i]);
        }
    }
    if(secondmax==0){
        secondmax=mx;
    }
    int a[n];
    for(int i=0;i<n;i++){
        if(arr[i]==mx && secondmax==mx ){
            a[i]=arr[i]-secondmax;
        }
        else if(arr[i]==mx){
            a[i]=arr[i]-secondmax;
        }
        else{
            a[i]=arr[i]-mx;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
return 0;
}