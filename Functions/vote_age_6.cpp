// 6. A person is eligible to vote if his/her age is greater than or equal to 18. Define a
// function to find out if he/she is eligible to vote.
#include<bits/stdc++.h>
using namespace std;

void result(int age){
    if(age>=18){
        cout<<"eligible to vote"<<endl;
    }
    else cout<<"not eligible to vote";
}


int main(){
	int age;
    cout<<"enter age : ";
    cin>>age;
    result(age); 
}

