//chef wants to participate in tournament .Team should contain 6 to 8 members. cheeck wehter chef can participate or not with n test cases

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;			//test cases
	cin>>t;
	while(t--){
	    int N;		//number of members
	    cin>>N;
	    if(N>=6 && N<=8){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}

