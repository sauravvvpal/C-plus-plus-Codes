#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n==1)
cout<<n<<endl;
else if(n==2)
cout<<n+1<<endl;
else
cout<<(n*(n+1))/2 + (n-2)<<endl;

return 0;
}