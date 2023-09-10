//print 2^n;

#include <bits/stdc++.h>

using namespace std;

int cal(int n)
{   int static product=1;
    if(n==0) return 0;
    product=product*2;
    cal(n-1);
    return product;
    
}
int main()
{   
    int n;
    cin>>n;
    int r=cal(n);
    cout<<r;
}

