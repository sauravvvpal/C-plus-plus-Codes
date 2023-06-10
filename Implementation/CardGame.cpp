#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string card;
cin>>card;
vector<string>hand;
for(int i=0;i<5;i++){
    cin>>hand[i];
}
for(auto h:hand){
    // rank match or suite

    if(h[0]==card[0] || h[1]==card[1]){
        cout<<"YES"<<endl;
        return 0;
    }
    else
    cout<<"NO"<<endl;
}
return 0;
}