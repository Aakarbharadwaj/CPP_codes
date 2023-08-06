//Check Even or Odd:
//Implement a function that takes an integer as input and uses pointers to determine if it's even or odd.

#include<bits/stdc++.h>
using namespace std;

void oddEven(){
	int num;
	int* ptr;
	ptr=&num;
	cout<<"enter num : ";
	cin>>num;
	if(*ptr%2==0){
		cout<<*ptr<<" is even";
	}
	else{
		cout<<*ptr<<" is odd";
	}
	
}

int main(){
	oddEven();
}
