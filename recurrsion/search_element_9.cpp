//9. WAP to search an element in array.

#include <bits/stdc++.h>

using namespace std;

void fun(vector<int> arr,int n,int i)
{   
    pair<int,int>p;
    static int sum=0;
    if(n==-1)return;
    
    if(arr[n]==arr[i])
    {
        cout<<arr[i]<<" is present at "<<i<<" index";
    }
   
    fun(arr,n-1,i);
    
    
}
int main()
{   
    vector<int>arr={1,2,3,4,5,6};
    int s=arr.size();
    int n=s-1;
    int i=5;
    fun(arr,n,i);
}

