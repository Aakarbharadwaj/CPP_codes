//Write a C program to check Least Significant Bit (LSB) of a number is set or not.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n & 1){
        cout<<"set";
    }
    else{
        cout<<"not set";
    }
    return 0;
}
