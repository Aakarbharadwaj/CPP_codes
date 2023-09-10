//3. Write a program to print the circumference and area of a circle of radius entered by user by defining your
//own function.

#include<bits/stdc++.h>
using namespace std;

void multiply(int radius){

    cout<<"circumference = "<<2*3.14*radius<<endl;
    cout<<"area ="<<3.14*pow(radius,2);
    
}

int main(){
	int radius;
    cin>>radius;
    multiply(radius);
}

