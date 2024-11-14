#include <iostream>
#include <iomanip>
using namespace std;

class USA;
class India;
class UAE;
class UK;

class India {
public:
    float inr;
    India(float value = 100.0) : inr(value) {}
    India(const USA temp);
    India(const UAE temp);
    India(const UK temp);
};

class UAE {
public:
    float dirham;
    UAE(float value = 100.0) : dirham(value) {}
    UAE(const India temp);
    UAE(const USA temp);
    UAE(const UK temp);
};

class UK {
public:
    float pound;
    UK(float value = 100.0) : pound(value) {}
    UK(const India temp);
    UK(const USA temp);
    UK(const UAE temp);
};

class USA {
public:
    float dollar;
    USA(float value = 100.0) : dollar(value) {}
    USA(const India temp);
    USA(const UAE temp);
    USA(const UK temp);
};

India::India(const USA temp) {
    this->inr = temp.dollar * 84.36;
}

India::India(const UAE temp) {
    this->inr = temp.dirham / 3.67 * 84.36;
}

India::India(const UK temp) {
    this->inr = temp.pound / 0.77 * 84.36;
}

UAE::UAE(const India temp) {
    this->dirham = temp.inr / 84.36 * 3.67;
}

UAE::UAE(const USA temp) {
    this->dirham = temp.dollar * 3.67;
}

UAE::UAE(const UK temp) {
    this->dirham = temp.pound / 0.77 * 3.67;
}

UK::UK(const India temp) {
    this->pound = temp.inr / 84.36 * 0.77;
}

UK::UK(const USA temp) {
    this->pound = temp.dollar * 0.77;
}

UK::UK(const UAE temp) {
    this->pound = temp.dirham / 3.67 * 0.77;
}

USA::USA(const India temp) {
    this->dollar = temp.inr / 84.36;
}

USA::USA(const UAE temp) {
    this->dollar = temp.dirham / 3.67;
}

USA::USA(const UK temp) {
    this->dollar = temp.pound / 0.77;
}

int main() {
    India i1(1000.0);
    USA u1(100.0);
    UK k1(100.0);
    UAE e1(100.0);

    cout << fixed << setprecision(2); 

    cout << "INR 1000.00 to:" << endl;
    cout << "  USD: " << USA(i1).dollar << endl;
    cout << "  GBP: " << UK(i1).pound << endl;
    cout << "  AED: " << UAE(i1).dirham << endl;
    cout << "  INR: " << i1.inr << endl;
    cout << endl;
  
    cout << "USD 100.00 to:" << endl;
    cout << "  INR: " << India(u1).inr << endl;
    cout << "  GBP: " << UK(u1).pound << endl;
    cout << "  AED: " << UAE(u1).dirham << endl;
    cout << "  USD: " << u1.dollar << endl;
    cout << endl;

    cout << "GBP 100.00 to:" << endl;
    cout << "  INR: " << India(k1).inr << endl;
    cout << "  USD: " << USA(k1).dollar << endl;
    cout << "  AED: " << UAE(k1).dirham << endl;
    cout << "  GBP: " << k1.pound << endl;
    cout << endl;

    cout << "AED 100.00 to:" << endl;
    cout << "  INR: " << India(e1).inr << endl;
    cout << "  USD: " << USA(e1).dollar << endl;
    cout << "  GBP: " << UK(e1).pound << endl;
    cout << "  AED: " << e1.dirham << endl;
    cout << endl;

    return 0;
}
