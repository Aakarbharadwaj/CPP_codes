//add tne num till single digit sum.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,sum=0,r=0;
    cin>>num;
    while(num>9){
        while(num>0){
            r=num%10;
            sum+=r;
            num/=10;
        }
        num=sum;
        sum=0;
    }
    cout<<num;
    return 0;
}
