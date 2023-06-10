#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int mx=*max_element(a,a+n);
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        if(a[i]==mx)
	        cnt++;
        }
	if(cnt%2==1)
	cout<<"marichka"<<endl;
	else if(cnt%2==0)
	cout<<"zenyk"<<endl;
	}
	return 0;
}
