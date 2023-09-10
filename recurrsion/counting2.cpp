//2. WAP to print counting 1 to N and N to 1.

#include <bits/stdc++.h>

using namespace std;

void counting(int n)
{
    if(n>0){
        cout<<n<<endl;
        counting(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter range of n : ";
    cin>>n;
    counting(n);
}

