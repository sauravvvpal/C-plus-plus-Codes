#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sum(int i,int total){
    if(i<1){
        cout<<total<<endl;
    }
    else
    sum(i-1,total+i);
}

int main(){
int n;
cin>>n;
sum(n,0);
return 0;
}