//7. How do you pass a pointer to a function as an argument? Provide an example.

#include<bits/stdc++.h>
using namespace std;

void add(int* ptr1,int* ptr2){
	int sum=*ptr1 + *ptr2;
	cout<<"sum ="<<sum;
}

int main(){
	int a=4,b=5;
	int* ptr1=&a;
	int* ptr2=&b;
	add(&a,&b);
}
