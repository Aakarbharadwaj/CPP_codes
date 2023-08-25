// Calculate Sum and Difference:
// Write a function that calculates both the sum and the difference of two integers 
// using pointers and returns both values.

#include<bits/stdc++.h>
using namespace std;

void calculate(int* p1,int* p2){
    int sum=*p1+*p2;
    int difference=*p2-*p1;
    cout<<*p1<<"+"<<*p2<<"="<<sum<<endl;
    cout<<*p2<<"-"<<*p1<<"="<<difference;

    
}

int main(){
    int a,b;
    int* ptr1=&a;
    int* ptr2=&b;
    cout<<"enter value 1 :";
    cin>>a;
    cout<<"enter value 1 :";
    cin>>b;
    calculate(ptr1,ptr2);
}

