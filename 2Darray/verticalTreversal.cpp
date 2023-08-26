// Write a program for vertical treversal of  matrices

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3]={{1,4,7},{2,5,8},{3,6,9}};
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}


