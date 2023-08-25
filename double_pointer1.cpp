//1. Declare a pointer to an integer `num` and another pointer to a pointer pointing to `num`.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	int* ptr=&num;
	int** q=&ptr;
	cout<<**q<<endl; //value of num
	cout<<q<<endl; //address of ptr
	cout<<&ptr<<endl; //address of ptr
	cout<<&num<<endl;//address of num
	cout<<*q; //address of num
}
