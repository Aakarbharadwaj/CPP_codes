//1. WAP to print your name N times.

#include <bits/stdc++.h>

using namespace std;

void name(int n)
{
    if(n==0)return;
    cout<<"Aakar Bharadwaj"<<endl;
    name(n-1);
}
int main()
{
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    name(n);
}

