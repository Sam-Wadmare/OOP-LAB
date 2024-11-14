// convert all currencies to usd adn then convert to whatevers asked
// intermediate 
// add menudriven feature to convert between any currency
#include<iostream>
using namespace std;

class USA;
class India;
class UAE;
class UK;

class India {
public:
    int inr;
    India(int value = 100) : inr(value) {}
};

class UAE {
public:
    int dirham;
    UAE(int value = 100) : dirham(value) {}
};

class UK {
public:
    int pound;
    UK(int value = 100) : pound(value) {}
};

class USA {
public:
    int dollar;
    USA(int value = 100) : dollar(value) {}

    USA(India temp) {
        this->dollar = temp.inr / 80;
    }
    USA(UAE temp) {
        this->dollar = temp.dirham / 3.67;
    }
    USA(UK temp) {
        this->dollar = temp.pound / 0.77;
    }

    operator India() {
        India temp;
        temp.inr = dollar * 80;
        return temp;
    }
    
    operator UAE(){
        UAE temp;
        temp.dirham = dollar * 3.67;
        return temp;
    }
    
    operator UK(){
        UK temp;
        temp.pound = dollar * 0.77;
        return temp;
    }   
    
};

int main() {
    India i1;
    USA u1;
    UK k1;
    UAE e1;
    
    // cout << "Enter INR : " ;r
    // cin >> i1.inr;
    // cout << "Enter Dirham : " ;
    // cin >> e1.dirham;
    // cout << "Enter pound : " ;
    // cin >> k1.pound;
    // cout << "Enter USD : ";
    // cin >> u1.dollar;
    
    // Implicit conversions
    
    USA u2 = i1;   
    USA u3 = k1;
    USA u4 = e1;
  
    UK k2 = u3;
    UAE e2 = u4;    
    India i2 = u2;

    India i3 = u4;

    
    cout << endl;
    cout << "Inr -> Dollar: " << u2.dollar << endl;
    cout << "Pound -> Dollar: " << u3.dollar << endl;
    cout << "Dirham -> Dollar: " << u4.dollar << endl;

    cout << endl;
    cout << "Dollar -> pound: " << k2.pound << endl;
    cout << "Dollar -> dirham: " << e2.dirham << endl;  
    cout << "Dollar -> Inr: " << i2.inr << endl; 

    cout << "Dirham -> Inr: " << i3.inr << endl;


    //...cout << "Dollar -> Inr: " << i2.inr << endl;
    

    return 0;
}
