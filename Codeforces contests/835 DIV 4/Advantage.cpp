#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int arr2[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    
   long long int mx=0;
   long long int secondmax=0;
   sort(arr,arr+n);
   mx=arr[n-1];
   secondmax=arr[n-2];
   
    long long int a[n];
    for(int i=0;i<n;i++){
        if(arr2[i]==mx){
            a[i]=arr2[i]-secondmax;
        }
        else{
            a[i]=arr2[i]-mx;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
return 0;
}