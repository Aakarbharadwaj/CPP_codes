// 3. Using the pointer to pointer, modify the value of `num`.
#include<bits/stdc++.h>
using namespace std;

int main(){
	int num=20;
	int* p=&num;
	int** q=&p;
    **q=51;
    cout<<num;

}
