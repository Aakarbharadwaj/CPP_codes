// Write a program in C to print all unique elements in an array.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    int a[n],a1[n];
    
    for(i=0;i<n;i++)
    {  //create array
        cin>>a[i];
    }
    
    
    for(i=0;i<n;i++)
    {
        
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
			{
		        if(a[i]==a[j])
		        {
		            flag++;
		            break;
		        }
        	}
        
        }
        if(flag==0)
        {
            cout<<" unique: "<<a[i]<<endl;
        }
        
    }

}
