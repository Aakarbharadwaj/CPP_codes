//1.Write a program to print the sum of two numbers entered by user by defining your own function.
#include<bits/stdc++.h>
using namespace std;
void add(int a,int b){
    int sum=a+b;
    cout<<sum;
}
int main(){
	int a,b;
	cout<<"enter two numbers : ";
    cin>>a>>b;
    add(a,b);
}
