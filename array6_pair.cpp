// 4.How do you find all pairs of an integer array whose sum is equal to a given number?
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(a[i]+a[j]==x){
                cout<<a[i]<<" & "<<a[j];
                return 0;
            }
        }
    }
    cout<<"no such pair exist";
    return 0;
}
