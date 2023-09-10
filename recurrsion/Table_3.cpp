//3. WAP to print table of a number.

#include <bits/stdc++.h>

using namespace std;

void counting(int range,int num)
{
    if(range>0){
        counting(range-1,num);
        cout<<range<<" x "<<num<<" = "<<range*num<<endl;
    }
}
int main()
{
    int range,num;
    cout<<"enter num for table: ";
    cin>>num;
    cout<<"enter range : ";
    cin>>range;
  
    
    counting(range,num);
}

