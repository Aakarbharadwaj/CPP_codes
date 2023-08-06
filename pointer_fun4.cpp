//Create a function that increments a given integer by 1 using pointers.

#include<bits/stdc++.h>
using namespace std;

void increament(){
	int* ptr;       //pointer declared
	int num;  
	ptr=&num;
	cout<<"enter num : ";
	cin>>num;
	cout<<++(*ptr);
	
}

int main (){
	increament();
}
