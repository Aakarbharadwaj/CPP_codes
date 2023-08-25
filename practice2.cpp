#include<bits/stdc++.h>
using namespace std;

class car{
    public:
        int quantity;
        string color;
        string model;
};

int main(){
    car harrier;
    
    harrier.quantity=5;
    harrier.color="black";
    harrier.model="z+";

    car safari;
    
    safari.quantity=4;
    safari.color="white";
    safari.model="G+";

    cout <<harrier.quantity<<" "<<harrier.color<<" "<<harrier.model<<"\n";
    cout <<safari.quantity<<" "<<safari.color<<" "<<safari.model;
    
}

