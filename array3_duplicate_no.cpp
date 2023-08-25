//find uniq value.
//doubt
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	cout<<"ok1"<<a[i]<<endl;//	23423
        
		
        
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=0;
                break;
            }
            
            if(j==n-1){
				cout<<"ok3"<<endl;
		        cout<<a[i]<<endl;
		        return 0;
			}
        
        }

    }
}
