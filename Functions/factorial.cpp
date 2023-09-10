//8. Write a program to print the factorial of a number by defining a function named Factorial
#include<bits/stdc++.h>
using namespace std;

void Factorial(int num)
{	
	int fact=1;
    for(int i=1;i<num+1;i++)
    {
        fact*=i;
    }
    cout<<fact;
}


int main(){
	int num;
    cout<<"enter number : ";
    cin>>num;
    Factorial(num) ; 
}

