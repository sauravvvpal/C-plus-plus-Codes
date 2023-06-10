#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,(int)a[i]);
    }
    cout<<(mx-96)<<endl;
}
return 0;
}