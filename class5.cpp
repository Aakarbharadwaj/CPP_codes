//3.*Default Constructor Usage:*
//  Define a class named `Student` with private attributes `name` and `roll_number`. Implement a default constructor that initializes the attributes to default values. 
//  Create an object and display its attributes.

#include<bits/stdc++.h>
using namespace std;

class student{
	private:
		string name;
		int roll_number;
			
	public:
		student(){
			name="Ram";
			roll_number=11;
		}
		
		void display(){
			cout<<"Name : "<<name<<endl<<"roll_number : "<<roll_number;
		}
};

int main(){
	student obj;
	obj.display();
}
