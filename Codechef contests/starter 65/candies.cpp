#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int mx=0;
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<2*n-1;i++){
        int cnt=0;
    for(int j=i;j<2*n;j++){
        if(arr[i]==arr[j]){
        cnt++;
        mx=max(mx,cnt);
        }
    }
    }

    if(mx>2){
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;
}
return 0;
}