#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int temp;
int arr[n];
for(int i=1;i<=n;i++){
       cin>>temp;
       arr[temp]=i;
}
for(int i=1;i<=n;i++){
      cout<<arr[i]<<" ";
}
return 0;
}