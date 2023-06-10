#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp;
string s;
cin>>s;
for(int i=0;i<s.length()-1;i+=2){
    for(int j=0;j<s.length()-1;j+=2){
          if(s[j]>s[i]){
            temp=s[j];
            s[j]=s[i];
            s[i]=temp;
          }
    }
}


    std::cout<<s<<endl;

return 0;
}