
// Increment by Specific Value:
// Create a function that takes an integer and a pointer to an integer as parameters. 
// The function should increment the integer value by the value pointed to by the pointer.

#include<bits/stdc++.h>
using namespace std;

void increment(int* p,int* u){
    int result=*p+*u;
    cout<<"increamented value = "<<result;
}

int main(){
    int num,user;
    cout<<"enter value : ";
    cin>>num;
    cout<<"enter value to add : ";
    cin>>user;
    int* ptr=&num;
    int* ptr2=&user;
    increment(&num,ptr2); //here one argument one is in &form & second is in pointer name form
                          //we usually takes same format. This is just for understanding purpose.s
}
