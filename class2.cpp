//1. *Class Initialization:*
//   Define a class named `Person` with private attributes `name` and `age`. Create an object of this class using the 
//   default constructor and set the values for the attributes using member functions.

#include<bits/stdc++.h>
using namespace std;

class Person{
	private:
		char name;
		int age;
		
	public:
		Person(){
			name="Ram";
			age=25;
		}
	
		void setValue(char n,int a){
			char name=n;
			int age=a;			
		}
		void display(){
			cout<<name<<endl;
			cout<<age;
		}
		
};

int main(){
	char n;
	int a;	
	Person obj;
	cout<<"enter name & age : ";
	cin>>n;
	cin>>a;
	obj.setValue(n,a);
	obj.display();
}
