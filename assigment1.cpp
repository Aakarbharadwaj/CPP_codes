#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	private:
		int length;
		int width;
		int area;
		int parameter;
	
	public:

		Rectangle(int l,int w){
			length=l;
			width=w;
		}
		
		void Area(){
			area=length*width;
	
			cout<<"area : "<<length<<"x"<<width<<" = "<<area<<"\n";
		}
		
		void Parameter(){
			parameter=2*length+2*width;
			cout<<"parameter : "<<"2x"<<length<<"+"<<"2x"<<width<<" = "<<parameter;
		}

};

int main(){
    int a,b;
    cout<<"length =";
    cin>>a;
    cout<<"width =";
    cin>>b;
    
	Rectangle obj1(a,b);
	obj1.Area();
	obj1.Parameter();
}
