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
    int flag=1;
    for(int i=0;i<n-1;i++){
        
        for(int j=1;j<n;j++){
            
            if(a[i]+a[j]==x){
                
                cout<<a[i]<<" & "<<a[j]<<endl;
                flag=0;
                
            }
        }
    }
    if(flag){
    cout<<"no such pair exist";
    }
    return 0;
}
