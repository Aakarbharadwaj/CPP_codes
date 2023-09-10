// 4. Define two functions to print the maximum and the minimum number respectively
// among three numbers entered by user.

#include<bits/stdc++.h>
using namespace std;

void max(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<" is max"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is max"<<endl;
    }
    else cout<<c<<" is max"<<endl;
}
void min(int a,int b,int c){
    if(a<b && a<c){
        cout<<a<<" is min "<<endl;
    }
    else if(b<a && b<c){
        cout<<b<<" is min "<<endl;
    }
    else cout<<c<<" is min "<<endl;
}

int main(){
    int n1,n2,n3;
    cout<<"enter numbers : ";
    cin>>n1>>n2>>n3;
    max(n1,n2,n3);
    min(n1,n2,n3);
}

