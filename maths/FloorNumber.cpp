#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    if(n<=2){
        cout<<1<<endl;
    }
    else
    cout<<((n-3)/x)+2<<endl;
}
return 0;
}