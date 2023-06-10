#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long int m,s;
    cin>>m>>s;
    int a[m];
    long long int sum=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        sum+=a[i];
    }
 int h=1;
 long long int total=sum+s;
 long long int sum2=0;
 while(total>sum2){
    sum2=(h*(h+1))/2;
    h++;
 }
 if(sum2==total){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
}
return 0;
}