//10. WAP to check whether an array is sorted or not.

#include <bits/stdc++.h>

using namespace std;

int fun(vector<int> arr,int n)
{   
    pair<int,int>p;
    static int sum=0,cnt=0;
    if(n==-1)return 0;
   
    fun(arr,n-1);
    
    if(arr[n]>arr[n+1]){
        cnt++;
    }
    return cnt;
}
int main()
{   
    vector<int>arr;
    int r;
    cout<<"enter r :";
    cin>>r;
    for(int i=0;i<r;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int s=arr.size();
    int n=s-2;
    int result=fun(arr,n);
    if(result==0)cout<<"sorted";
    else cout<<"not sorted";
}

