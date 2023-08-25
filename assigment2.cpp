//1. *Class Initialization:*
//   Define a class named `Person` with private attributes `name` and `age`. Create an object of this class using the 
//   default constructor and set the values for the attributes using member functions.

#include<bits/stdc++.h>
using namespace std;

class Person{
	private:
		string name;
		int age;
		
	public:
		Person(){
			name = "Ram";
			age= 25;
		}
	
		void setValue(string n,int a){
			name=n;
			age=a;			
		}
		void display(){
			cout<<name<<endl;
			cout<<age;
		}
		
};

int main(){
	
	Person obj;
    string n;
	int a;

	cout<<"enter name : ";
	cin>>n;
	cout<<"enter age : ";
	cin>>a;

	obj.setValue(n,a);
	obj.display();
}
