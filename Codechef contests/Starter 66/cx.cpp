#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k,x;
	    cin>>n>>m>>k>>x;
	    int temp = n*k+m;
	    int s = n*(k-1);
	    int v = x%temp;
	    if(v!=0 && (v-s)<=0){
	        cout<<"NO"<<endl;
	    }
        else cout<<"YES"<<endl;
	}
	return 0;
}