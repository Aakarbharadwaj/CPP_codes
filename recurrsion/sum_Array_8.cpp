//8. WAP to print sum of elements of an array.

#include <bits/stdc++.h>

using namespace std;

int fun(vector<int> arr,int n)
{   
    static int sum=0;
    if(n==-1)return 0;
    
    sum+=arr[n];
    
    fun(arr,n-1);
    
    return sum;
        
}
int main()
{   
    vector<int>arr={1,2,3,4,5,6};
    int s=arr.size();
    int n=s-1;
    int sum=fun(arr,n);
    cout<<sum;
}

