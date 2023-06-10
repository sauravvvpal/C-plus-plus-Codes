#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int k,r;
cin>>k>>r;
int p;
for(int i=1;i<=10;i++){
    p=i*k;
    if(p%10==0 || p%10==r){
    cout<<i<<endl;
    break;
    }
}

return 0;
}