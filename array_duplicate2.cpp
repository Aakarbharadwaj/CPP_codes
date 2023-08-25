//6. Write a program in C to print all duplicate elements in an array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,sum=0;
    cin>>n;
    int a[n],a1[n];
    
    for(i=0;i<n;i++){  //create array
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            
            if(a[i]==a[j]){
                cout<<"duplicate numbers are : ";
                cout<<a[i]<<endl;
            }
        }
    }
}
