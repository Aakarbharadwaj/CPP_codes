//revrse
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    m=n;
    int a[n];
    int a1[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        a1[--m]=a[i];   
    }
    for(int i=0;i<n;i++){
        cout<<a1[i]<<" "<<a[i]<<endl;
    }
}
