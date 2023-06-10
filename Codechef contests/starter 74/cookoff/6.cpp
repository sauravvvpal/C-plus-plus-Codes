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
	    int mn=INT_MAX;
	    int sum;
	    int mdn;
	    for(int i=0;i<n-2;i++){
	        for(int j=i+1;i<n-1;j++){
	            for(int k=i+2;k<n;k++){
	                sum=a[i]+a[j]+a[k];
	                if((sum%3)==0){
	                    mn=min(mn,sum);
	                    mdn=a[j];
	                }
	            }
	        }
	    }
	    int mean=mn/3;
	    cout<<3*abs(mean-mdn)<<endl;
	}
	return 0;
}
