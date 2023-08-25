//1. How do you find the missing number in a given integer array of 1 to 100

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a[n];
    
    for(i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;n++){
        if(a[i+1]-a[i]!=1){
            cout<<"missing no.:"<<(a[i]+1);
            return 0;
        }
    }
    cout<<"series in sequence";
    return 0;
}
