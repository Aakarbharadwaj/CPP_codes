//2. *Parameterized Constructor:*
//   Create a class named `Rectangle` with private attributes `width` and `height`. Implement a parameterized constructor to initialize these attributes. 
//   Calculate and display the area of the rectangle using a member function.

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	private:
		float width,height,result;
	
	public:
		Rectangle(float w,float h){
			width=w;
			height=h;
		}
		
		void setValue(float x,float y){
			width=x;
			height=y;
		}
		
		void area(){
			result = width*height;
		}
		
		void display(){
			cout<<"area of square = "<<result;
		}
};

int main(){
	Rectangle obj(1,1);
	float w,h;
	cout<<"width = ";
	cin>>w;
	cout<<"height = ";
	cin>>h;
	obj.setValue(w,h);
	obj.area();
	obj.display();
}
