#include<iostream>
using namespace std;
int main(){
int long long n;
int k;
cin>>n>>k;
while(k--){
    if(n%10!=0){
        n--;
    }
    else if(n%10==0){
        n=n/10;
    }
}
cout<<n<<endl;
return 0;
}