// Write a program using Template funtion for finding maximum number

#include<bits/stdc++.h>
using namespace std;
template<class T>
T maxi(T x,T y)
{
    return x>y?x:y;
    
}

int main()
{
    cout<<maxi(5,6)<<endl;
    cout<<maxi(2.4f,3.4f)<<endl;
    cout<<maxi(2.4,3.4);
    
    return 0;
}


