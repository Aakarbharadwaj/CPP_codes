//23. Write a program in C to find the sum of the right diagonals of a matrix.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    int sum=0;
    for(int i=0;i<3;i++)
    {
        
        sum+=a[i][i];

    }
    cout<<sum<<" ";
}


