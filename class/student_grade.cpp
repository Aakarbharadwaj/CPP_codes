//class with inline function.
#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        int roll,sum,average;
        string name;
        int math;
        int hindi;
        int english;
    
    public:
        student(int r=0,string n="none",int m=0,int h=0,int e=0 )
        {
            roll=r;
            name=n;
            math=m;
            hindi=h;
            english=e;
        }
        int total()
        {
            return math+hindi+english;
        }
        int avg()
        {
            average=total()*100/300;
            return average;
        }
        char grade()
        {
            if(average<40)
                return 'C';
            else if(average>=40 && average<60)
                return 'B';
            else
                return 'A';
        }
};

int main(){
    int r,m,h,e;
    string n;
    cout<<"enter Roll no. : ";
    cin>>r;
    cout<<"enter Name : ";
    cin>>n;
    cout<<"enter math marks : ";
    cin>>m;
    cout<<"enter hindi marks : ";
    cin>>h;
    cout<<"enter english marks : ";
    cin>>e;
    student s1(r,n,m,h,e);
    cout<<"roll :"<<r<<endl;
    cout<<"total :"<<s1.total()<<endl;
    cout<<"percent :"<<s1.avg()<<endl;
    cout<<"Grade :"<<s1.grade();
}

