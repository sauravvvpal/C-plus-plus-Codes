#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    bool f=1;
    for(int i=2;i<(a+b);i++){
          if((a+b)%i==0){
               f=0;
               break;
          }
         if(i==a+b-1)
         f==1; 
    }
    if(f==1){
        cout<<"Alice"<<endl;
    }
    else if(f==0)
    cout<<"Bob"<<endl;
}
return 0;
}