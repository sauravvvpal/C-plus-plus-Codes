#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int el=*max_element(a,a+n);
    int cnt=count(a,a+n,el);
    if(cnt>1){
         int ele=*max_element(b,b+n);
         for(int i=0;i<n;i++){
            if(b[i]==ele)
            cout<<i+1<<endl;
         }
    }
    else
    for(int i=0;i<n;i++){
            if(a[i]==el)
            cout<<i+1<<endl;
         }



    
}
return 0;
}