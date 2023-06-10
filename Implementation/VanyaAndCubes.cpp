#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int long long n;
cin>>n;
int long long cnt=0;
int long long sum=0;
 int long long i=1;
while(n>=sum){
      sum+=i;
      n-=sum;
      i++;
      cnt++;
}
cout<<cnt<<endl;
return 0;
}