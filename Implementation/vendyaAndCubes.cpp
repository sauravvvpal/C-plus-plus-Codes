#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int cnt=0;
int h=0;
while(n>=cnt){
     h++;
      cnt+=(h*(h+1))/2;
     
}
cout<<h-1<<endl;
return 0;
}