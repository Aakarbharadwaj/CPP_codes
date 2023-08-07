//add odd numbers.

#include<bits/stdc++.h>
using namespace std;

void add(int* ptr1){
    int sum=0;
    for(int i=0;i<=*ptr1;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<"odd number sum = "<<sum;
}

int main(){
    int a;
    cout<<"enter range : ";
    cin>>a;
    int* ptr1=&a;
    add(&a);
    return 0;
}
