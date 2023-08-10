#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    s=1<<31;
    if(n & s){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}
