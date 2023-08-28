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
   
        void getValues(int a,int b);			

        int result();				

        
};

        
        void add::getValues(int a,int b)		
        {
            a=a;
            b=b;
        }
        int add::result()			
        {
            return a+b;
        }
int main(){
    add s1(2,9);  
    add s2;
    cout<<"sum = "<<s1.result()<<endl;
    cout<<"sum = "<<s2.result();
}

