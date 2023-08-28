#include<bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    static string name;
    static int count;
    
    public:
        void setName()
        {
            count++;
            cout<<"Enter name of "<<count<<"st employee : ";
            cin>>name;
            
        }
        
        void getName()
        {
            cout<<"Name "<<count<<"st : "<<name<<endl;
            
        }
};

string Employee::name;
int Employee::count;

int main()
{
    Employee e1,e2,e3;
    
    e1.setName();
    e1.getName();
    
    e1.setName();
    e1.getName();
}
