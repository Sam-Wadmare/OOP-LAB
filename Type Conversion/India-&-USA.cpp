#include<iostream>
using namespace std;

class USA;
class India;

class India {
public:
    int inr;
    India(int value = 100) : inr(value) {}
};

class USA {
public:
    int dollar;
    USA(int value = 100) : dollar(value) {}

    // Conversion constructor to convert India to USA
    USA(India temp) {
        this->dollar = temp.inr / 80;
    }

    // Conversion operator to convert USA to India
    operator India() {
        India temp;
        temp.inr = dollar * 80;
        return temp;
    }
};

int main() {
    India i1;
    USA u1; // Initialize with 100 dollars
    cout << "Enter INR : " ;
    cin >> i1.inr;
    cout << "Enter USD : ";
    cin >> u1.dollar;
    
    // Implicit conversions
    India i2 = u1; // Converts USA to India
    USA u2 = i1;   // Converts India to USA
  
    
    // Display values
    // cout << "i1.inr: " << i1.inr << endl;
    // cout << "i2.inr: " << i2.inr << endl;
    // cout << "u1.dollar: " << u1.dollar << endl;
    // cout << "u2.dollar: " << u2.dollar << endl;
    cout << endl;
    cout << "Inr -> Dollar: " << u2.dollar << endl;
    cout << "Dollar -> Inr: " << i2.inr << endl;
    

    return 0;
}
