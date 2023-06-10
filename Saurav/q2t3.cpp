#include <iostream>
using namespace std;
bool prime(int x){
    bool check=1;
    for(int i=2;i<x;i++){
        if(x%i!=0)
        check=0;
    }
    if(check==1)
    return true;
    else
    return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x%2==0)
	    cout<<((y/2)-(x/2)-1)+2<<endl;
	    
	}
	return 0;
}
