//class with inline function.
#include<bits/stdc++.h>
using namespace std;

class add{
    private:
        int a,b;
    
    public:
        add(int x=0,int y=0)			//constructor
        {
            a=x;
            b=y;
        }
        
        void getValues(int a,int b)			//inline function
        {
            a=a;
            b=b;
        }
        int result()				//inline function
        {
            return a+b;
        }
        
};

int main(){
    add s1(2,9);
    add s2;
    cout<<"sum = "<<s1.result()<<endl;
    cout<<"sum = "<<s2.result();
}

