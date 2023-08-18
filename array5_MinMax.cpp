// How do you find the largest and smallest number in an unsorted integer array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=a[0];
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"smallest number is : "<<min<<endl;
    cout<<"largest number is : "<<max;
}
