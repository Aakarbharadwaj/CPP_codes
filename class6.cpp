// 4. *Multiple Constructors:*
//   Implement a class named `Book` with private attributes `title`, `author`, and `year`. 
//   Provide two constructors: a default constructor that sets the title to "Unknown" and author to "Anonymous", 
//   and a parameterized constructor to set these attributes. Display book details using a member function.
#include<bits/stdc++.h>
using namespace std;

class Book{
    private:
        string title,author;
        int year;
        
    public:
        Book(){
            title="Unknown";
            author="Anonymous";
            yeat=0;
        }
        
        Book(string t,string a,int y){
            title=t;
            author=a;
            year=y;
        }
        void getDetails(string p,string q,int r){
        	title=p;
            author=q;
            year=r;
		}
        void Display(){
            cout<<title<<endl<<author<<endl<<year;
            }
        
};

int main(){
    Book obj("Ramayana","Ram",1990);
    string t,a;
    int y;
    cout<<"enter title ,Author ,year : ";

	cin>>t;
    cin>>a;
    cin>>y;
    obj.getDetails(t,a,y);
    obj.Display();
    
}
