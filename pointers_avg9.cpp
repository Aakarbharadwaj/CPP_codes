// 1. *Grades Calculator:*
//   Write a function that calculates the average of a student given 
//   three subject grades. Return these values using pointers.

#include<bits/stdc++.h>
using namespace std;

void average(int* pt1,int* pt2,int* pt3,int* avg){
    *avg=((*pt1)+(*pt2)+(*pt3))/3;
    
}

int main(){
    int m,s,h,a;
    cout<<"enter 3 values = ";
    cin>>m>>s>>h;
    int* p1=&m;
    int* p2=&s;
    int* p3=&h;
    int* avg=&a;
    average(p1,p2,p3,avg);
    cout<<"average = "<<*avg;
    
}
