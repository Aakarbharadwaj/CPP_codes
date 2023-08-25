//7. Write a program in C to merge two arrays of the same size sorted in descending order.



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cin>>n;  //length of p
    cin>>m;  //length of q
    int a[n+m],p[n],q[m];
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        cin>>p[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>q[j];
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" "<<q[i]<<endl;
    }
    i=0,j=0,k=0;
    while(i<(n+m))
    {
        if(j<n && k<m)
        {   
                if(q[j]<p[k])
            {
                a[i]=q[j];
                j++;
            }
            else
            {
                a[i]=p[k];
                k++;
            }
        }
        
        else if(j<n)
        {
            a[i]=q[j];
            j++;
        }
        else{
            a[i]=p[k];
        }
        i++;
    }
    
    for(int i=0;i<(n+n);i++)
    {
        cout<<a[i]<<" ";
    }

    
    return 0;
}
