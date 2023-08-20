//7 How do you search a target value in a rotated array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i=0,k;
    cout<<"enter k(index) value : ";
    cin>>k; //K is index target value;
    cout<<"enter n value : ";
    cin>>n;
    m=n;
    int a[n],a1[n];
    while(i<n){             //creating array
        cin>>a[i];
        i++;
    }
    cout<<"before sorting "<<a[k]<<endl;
    
    // for(int i=0;i<n;i++){
    //     cout<<i<<" ";
    //     cout<<a[i]<<endl;
    // }
    
    for(int i=0;i<n;i++){   //reversing array    
        a1[i]=a[--m];
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<i<<" ";
    //     cout<<a1[i]<<endl;
    // }
    
    cout<<"after sorting "<<a1[n-(k+1)];
    
}
