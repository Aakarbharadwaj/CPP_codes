//Modify Value Directly:
//Implement a function that takes an integer as a parameter and adds 10 to its value using pointers.

#include<bits/stdc++.h>
using namespace std;

int add(int x){
	int num2=10;
	int* ptr=&num2;
	int sum=*ptr+x;
	cout<<x<<" + "<<*ptr<<" = "<<sum;
}

int main(){
	int num;
	int* ptr;
	cout<<"enter num : ";
	cin>>num;
	int result=add(num);
}
