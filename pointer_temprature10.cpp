// 2. *Temperature Conversion:*
//   Design a function that converts temperature from Fahrenheit to Celsius and vice versa. 
//   Return both converted values using pointers.

#include<bits/stdc++.h>
using namespace std;

void convert(float* c,float* f){
    float feranite=(*c * (1.8)) + 32 ;
    float celcious=(*f - 32) * (0.55555);
    cout<<*c <<"celcius to feranite : "<<feranite<<endl;
    cout<<*f <<"feranite to celcious :"<<celcious;
}

int main(){
    float c,f;
 
    cout<<"enter temp in celcious :";
    cin>>c;
    cout<<"enter temp in feranite :";
    cin>>f;
    float* ctr=&c;
    float* ftr=&f;
    convert(ctr,ftr);
}
