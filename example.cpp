#include<bits/stdc++.h>
using namespace std;

class Myclass{
    private:
        int num1,num2,sum;
    
    public:
        Myclass(){

        }
        
        void getNum(int x,int y){
            num1=x;
            num2=y;
        }
        
        void add(){
            sum=num1+num2;
            cout<<sum;
        }
        
};

int main(){
    
    Myclass obj1;
    obj1.add();

}
