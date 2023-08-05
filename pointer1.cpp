//pointer basic example
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=21;
    int* x=&num;
    cout<<"value in num ="<<num<<endl;
    cout<<"value in x ="<<*x<<endl;
    cout<<"value in num ="<<*(&num)<<endl;
    cout<<"address of num ="<<&num<<endl;
    cout<<"address of num ="<<x;
}
