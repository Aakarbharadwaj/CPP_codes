// Calculate Cube:
// Write a function that calculates and returns the cube of a number using pointers.

#include<bits/stdc++.h>
using namespace std;

int cube(int* ptr){
    int cal=pow(*ptr,3);
    return cal;
}

int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    int result=cube(&num);
    cout<<"cube of "<<num<<" = "<<result;
}
