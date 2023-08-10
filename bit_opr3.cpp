// Write a Cpp program to get nth bit of a number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,n;
    cin>>num>>n;
    int r=1<<n-1;
    if(num & r){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}
