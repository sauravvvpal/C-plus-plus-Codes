#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int b[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
            sum+=b[i];
	    }
	    if(n%2==0 && sum%2==0){
	        cout<<"yes"<<endl;
        }

    else if(n%2!=0 && sum%2!=0) 
	cout<<"yes"<<endl;
    else 
    cout<<"no"<<endl;
}
	return 0;
}
