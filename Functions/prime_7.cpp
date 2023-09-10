//7. Define a function to find out if number is prime or not.
#include <bits/stdc++.h>

using namespace std;

void fact(int num)
{
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<num<<" is not prime";
            break;
        }
        else 
        {
            cout<<num<<" is prime";
        }
    }
}

int main(){
    int num;
    cin>>num;
    fact(num);
}

