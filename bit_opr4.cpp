// Write a C program to set nth bit of a number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,n;
    cin>>num>>n;
    int s=1<<n-1;
    if(num | s){
        cout<<num<<endl<< (num | s);
    }
}
