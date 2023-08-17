//sham decides to solve at least 10 problems every week for 4 weeks.Given the number of problems he actually solved in each week over 
//4 weeks as ,P1,P2,P3 and P4 . Output the number of weeks in which sham met his target.

#include <iostream>
using namespace std;

int main() {

	int a[4],count=0;
	for(int i=0;i<4;i++){
	    cin>>a[i];
	}
	
	int i=0;
	while(i<4){
	    if(a[i]>=10){
	        count+=1;
	    }
	    i++;
	}
	cout<<count;
	return 0;
}

