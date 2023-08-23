// shift odd at right and even at left

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    j=n-1;
    i=0;
    while(i!=j)
    {
        if(a[i]%2!=0)
        {
            i++;
        }
        else
        {
            swap(a[i],a[j]);
            --j;
        }
    }
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
