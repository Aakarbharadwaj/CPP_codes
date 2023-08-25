//19. Write a program in C for adding two matrices of the same size.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4][3]={{1,2,3},{5,6,7},{9,10,11},{13,14,15}};
    int b[4][3]={{1,2,3},{5,6,7},{9,10,11},{13,14,15}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum=a[i][j]+b[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}


