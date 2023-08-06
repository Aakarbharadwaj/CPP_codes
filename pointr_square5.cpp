//Calculate Square:
//Create a function that calculates and returns the square of a number using pointers.

#include<bits/stdc++.h>
using namespace std;

int square(int* ptr){
	int sq=pow(*ptr,2);
	return sq;
	
}

int main(){
	int num;
	cout<<"enter num :";
	cin>>num;
	int result=square(&num);
	cout<<"square of "<<num<<" = "<<result;
}
