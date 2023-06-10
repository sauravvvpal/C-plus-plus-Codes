#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int time=0;
    while(n>1){
        n=n/2;
        if(n==1)
        time=time+a;
        else
        time=time+a+b;
    }
cout<<time<<endl;
}
return 0;
}