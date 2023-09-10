//6. WAP to print an array.

#include <bits/stdc++.h>

using namespace std;

void fun(vector<int> arr,int s)
{   
    if(s==-1)return;
        
    fun(arr,s-1);
        
    cout<<arr[s]<<endl;     //in place of for loop ,s is working as index;      
}
int main()
{   
    vector<int>arr={1,2,3,4,5,6};
    int s=arr.size();
    fun(arr,s-1);
    
}

