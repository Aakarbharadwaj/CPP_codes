//2. Define a function that returns the product of two numbers entered by user.

#include<bits/stdc++.h>
using namespace std;

int multiply(int a,int b){
	int pro=a*b;
    return pro;
}

int main(){
	int a,b;
    cin>>a>>b;
    int result=multiply(a,b);
    cout<<result;
}

