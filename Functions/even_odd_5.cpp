//5. Define a function to find out whether a given number is even or odd.
#include<bits/stdc++.h>
using namespace std;

void result(int num){
    if(num%2==0){
        cout<<num<<" is even"<<endl;
    }
    else cout<<num<<" is odd";
}


int main(){
	int num;	
	cin>>num;
    result(num) ; 
}

