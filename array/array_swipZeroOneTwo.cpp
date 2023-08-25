// shift zero at right and one and 2 at left
//01201020120 --> 00000111222

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    i=0;
    int j=0,k=n-1;
    
    while(i<=k)
    {
        if(a[i]==0)
        {
            swap(a[j],a[i]);
            i++;
            j++;
        }
        else if(a[i]==1)
        {
            i++;
        }
        
        else if(a[i]==2)
        {
            swap(a[i],a[k]);
            k--;
        }

    }
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
