// Write a program in C for multiplying two matrices of the same size.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    int b[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    for(int i=0;i<3;i++)
    {   
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=a[i][j]*b[j][i];
            
        }
		cout<<sum<<" ";
		sum=0;
		for(int j=0;j<3;j++)
        {
            sum+=a[i][j]*b[j][i+1];
            
        }
        cout<<sum<<" ";
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=a[i][j]*b[j][i+2];
            
        }
		                                          
        cout<<sum<<endl;
        
    }
}


