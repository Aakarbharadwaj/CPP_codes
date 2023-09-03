//palinrom array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(a[i]!=a[j])
        {
            cout<<"not palindrom";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"num is palindrom";
    
}

