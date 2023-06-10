#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 const unsigned int M = 1000000007;
int main(){
int n;
cin>>n;
long long ans=(1<<n);
cout<<ans % M<<endl;
return 0;
}