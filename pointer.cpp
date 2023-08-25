#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *x;
    x=&a;
    cout<<a<<"\n";
    cout<<&a<<"\n";
    cout<<x<<"\n";
    cout<<*x<<"\n";
    cout<<*(&a)<<"\n";
    cout<<&x;
}
