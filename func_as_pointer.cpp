//function s pointer
#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int sub(int a,int b){
    int diff=a-b;
    return diff;
}

int main(){
    int (*operation)(int,int);
        
        operation=add;
        cout<<"add ="<<operation(4,5)<<endl;
        operation=sub;
        cout<<"sub ="<<operation(10,6);
}

