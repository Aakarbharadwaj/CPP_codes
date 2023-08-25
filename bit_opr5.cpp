// Write a C program to clear nth bit of a number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,n,s;
    cin>>num>>n;
    s=1<<n;
    int r=num & s;
    cout<<(num ^ r);
    
}
