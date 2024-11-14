#include<iostream>
#include<iomanip>
using namespace std;

class USA;
class India;
class UAE;
class UK;

class India {
public:
    float inr;
    India(float value = 100.0) : inr(value) {}
};

class UAE {
public:
    float dirham;
    UAE(float value = 100.0) : dirham(value) {}
};

class UK {
public:
    float pound;
    UK(float value = 100.0) : pound(value) {}
};

class USA {
public:
    float dollar;
    USA(float value = 100.0) : dollar(value) {}
    USA(India temp) {
        this->dollar = temp.inr / 84.36;
    }
    USA(UAE temp) {
        this->dollar = temp.dirham / 3.67;
    }
    USA(UK temp) {
        this->dollar = temp.pound / 0.77;
    }
    operator India() {
        India temp;
        temp.inr = dollar * 84.36;
        return temp;
    }
    operator UAE() {
        UAE temp;
        temp.dirham = dollar * 3.67;
        return temp;
    }
    operator UK() {
        UK temp;
        temp.pound = dollar * 0.77;
        return temp;
    }
};

int main() {
    int src,target;
    char choice;
    cout << fixed << setprecision(2);
    while(1){
        cout << "\n\nSource Currency : \n 1] INR\n 2] USD\n 3] AED \n 4] GBP \nEnter your choice: ";
        cin >> src;
        cout << endl; 
        cout << "Target Currency : \n 1] INR\n 2] USD\n 3] AED \n 4] GBP \nEnter your choice: ";
        cin >> target;
        cout << endl; 
            
           
        switch(target){
            case 1:
                if(src == 1){India i1; cout <<"Enter INR: "; cin >> i1.inr; India i2 = i1; cout << i2.inr << endl;}
                else if (src == 2){USA u1; cout <<"Enter USD: "; cin >> u1.dollar; India i2 = u1; cout << i2.inr << endl;}
                else if (src == 3){UAE e1; cout <<"Enter AED: "; cin >> e1.dirham; USA temp = e1; India i2 = temp; cout << i2.inr << endl;}
                else {UK k1; cout <<"Enter GBP: "; cin >> k1.pound; USA temp = k1; India i2 = temp; cout << i2.inr << endl;}
                break;
                
            case 2:
                if(src == 1){India i1; cout <<"Enter INR: "; cin >> i1.inr; USA u2 = i1; cout << u2.dollar << endl;}
                else if (src == 2){USA u1; cout <<"Enter USD: "; cin >> u1.dollar; USA u2 = u1; cout << u2.dollar << endl;}
                else if (src == 3){UAE e1; cout <<"Enter AED: "; cin >> e1.dirham; USA u2 = e1; cout << u2.dollar << endl;}
                else {UK k1; cout <<"Enter GBP: "; cin >> k1.pound; USA u2 = k1; cout << u2.dollar << endl;}
                break;

            case 3:
                if(src == 1){India i1; cout <<"Enter INR: "; cin >> i1.inr; USA temp = i1 ; UAE e2 = temp; cout << e2.dirham << endl;}
                else if (src == 2){USA u1; cout <<"Enter USD: "; cin >> u1.dollar; UAE e2 = u1; cout << e2.dirham << endl;}
                else if (src == 3){UAE e1; cout <<"Enter AED: "; cin >> e1.dirham; UAE e2 = e1; cout << e2.dirham << endl;}
                else {UK k1; cout <<"Enter GBP: "; cin >> k1.pound; USA temp = k1; UAE e2 = temp; cout << e2.dirham << endl;}
                break;

            case 4:
                if(src == 1){India i1; cout <<"Enter INR: "; cin >> i1.inr; USA temp = i1 ; UK k2 = temp; cout << k2.pound << endl;}
                else if (src == 2){USA u1; cout <<"Enter USD: "; cin >> u1.dollar; UK k2 = u1; cout << k2.pound << endl;}
                else if (src == 3){UAE e1; cout <<"Enter AED: "; cin >> e1.dirham; USA temp = e1; UK k2 = temp; cout << k2.pound << endl;}
                else {UK k1; cout <<"Enter GBP: "; cin >> k1.pound; UK k2 = k1; cout << k2.pound << endl;}
                break;
        }

        cout << "\nDo you wish to continue? (Y/N): ";
        cin >> choice;
        if (choice == 'N' || choice == 'n'){
            return 0;
        }
    }
    return 0;
}
