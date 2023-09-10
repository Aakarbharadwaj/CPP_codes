//4. WAP to print factorial of a number.

#include <bits/stdc++.h>

using namespace std;

void fact(int n)
{
    static int pro=1;
    if(n>1){
        pro*=n;
        fact(n-1);
        return;
    }
    cout<<pro;
}
int main()
{   
    int n;
    cout<<"enter n :";
    cin>>n;
    fact(n);
    
}

