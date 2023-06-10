#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s="codeforces";
    char s1;
    cin>>s1;
    bool check=0;
    for(int i=0;i<s.size();i++){
        
        if(s1==s[i]){
        check=1;
        break;
        }
    }
    if(check==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}

return 0;
}