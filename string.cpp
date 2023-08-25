// 3. *Character Count:*
//   Create a function that counts the number of vowels and consonants in a given string. 
//   Use pointers to return these counts.

#include<bits/stdc++.h>
using namespace std;

void count(string* s,int* c1,int* c2){
    for(int i=0;i<= *s.length();i++){
        if(s[i]=="a"||s[i]=="e"||s[i]=="i"||s[i]=="o"||s[i]=="u"){
            *c1= *c1+1;
        }
        else{
            *c2= *c2+1;
        }
    } 
}

int main(){
    string s;
    int c1,c2;
    cout<<"enter string s : ";
    cin>>s;
    string* ptr=&s;
    int* ptr1=&c1;
    int* ptr2=&c2;
    count(ptr,ptr1,ptr2);
    cout<<*ptr1<<" "<< *ptr2;
}
