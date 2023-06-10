#include<iostream>
using namespace std;
int main(){
int k,n,w;
cin>>k>>n>>w;
int total=0;
int banana=w;
while(w--){
total=total+k*banana;
banana--;
}
int borrow;
borrow=total-n;
if(borrow<0){
    cout<<0<<endl;
}
else
cout<<borrow<<endl;
return 0;
}