#include <bits/stdc++.h>
using namespace std;
class myclass{
	public:
		int myint;
		string mystring;
};

int main(){
	myclass myobj;
	
	myobj.myint=25;
	myobj.mystring="hello";
	
	cout <<myobj.myint<<"\n";
	cout <<myobj.mystring;
	return 0;
}
