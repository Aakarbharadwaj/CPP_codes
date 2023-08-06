
// Factorial of a Number:
// Write a function to find and return the factorial of a number using pointers.

#include<bits/stdc++.h>
using namespace std;

int factorial(int* ptr)
{
    int fact=1;
    for(int i=*ptr; i>0; i--){
        fact*=(i);
        cout<<fact<<endl;
    }
    return fact;
}

int main(){
    int num;
    cout<<"enter num : ";
    cin>>num;
    int result=factorial(&num);
    cout<<"fsctorial of "<<num<<" ="<<result;
}
