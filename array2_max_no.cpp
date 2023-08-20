//find largest number in array.


#include<bits/stdc++.h>
using namespace std;

int maximum(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    int n,i=0;
    cin>>n;
    int a[n];
    while(i<n){
        cin>>a[i];
        i++;
    }
    int result=a[0];
    for(int i=0;i<n;i++){
        
        result=maximum(a[i],result);
    }
    cout<<result;
    return 0;
}
