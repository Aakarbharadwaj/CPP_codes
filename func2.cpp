#include<bits/stdc++.h>
using namespace std;

int add(int a,int b){
    int sum=a+b;
    return sum;
    
}

int main(){
    int num1,num2;
    cout<<"enter 2 numbers to add : "<<endl;
    cin>>num1>>num2;
    int result=add(num1,num2);
    cout<<"sum = "<<result;
}
