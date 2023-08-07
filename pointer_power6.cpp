// Calculate Power:
// Write a function that calculates the power of a number using pointers. 
// The function should take two integer parameters: the base and the exponent.

#include<bits/stdc++.h>
using namespace std;

void power(int* p1,int* p2){
    int result=pow(*p1,*p2);
    cout<<*p1<< "^" <<*p2<<" = "<<result;
}

int main(){
    int a,b;
    cout<<"enter base value : ";
    cin>>a;
    cout<<"enter exponent value : ";
    cin>>b;
    int* ptr1=&a;
    int* ptr2=&b;
    power(&a,&b);
    return 0;
}
