#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsequences(int index,vector<int> &vec,int arr[],int n){
    if(index==n){
        for(auto it:vec){
            cout<<it<<" ";
        }
        if(vec.size()==0){
        cout<<"{ }";
    }
        cout<<endl;
        return ;
    }
     subsequences(index+1,vec,arr,n);
    vec.push_back(arr[index]);
    subsequences(index+1,vec,arr,n);
    vec.pop_back();
    

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>vec;
subsequences(0,vec,arr,n);

return 0;
}