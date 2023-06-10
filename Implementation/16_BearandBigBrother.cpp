#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int yrs=0;
while(a<=b){
    a=3*a;
    b=2*b;
    yrs++;
}
cout<<yrs<<endl;
return 0;
}