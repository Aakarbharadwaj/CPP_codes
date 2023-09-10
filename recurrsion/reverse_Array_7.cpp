//7. WAP to reverse an array.

#include <bits/stdc++.h>

using namespace std;

void fun(vector<int> &arr,int start,int end)        // Using input by (&)reference.
{                                               //If input by value than it will b creating a copy of array and we have to return array  
    if(start<=end){                             //after comlition of program.
    
        swap(arr[start],arr[end]);
        
        fun(arr,start+1,end-1);
        
    }


}
int main()
{   
    vector<int>arr={1,2,3,4,5,6};
    int s=arr.size();
    int end=s-1,start=0;
    fun(arr,start,end);
    
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}

