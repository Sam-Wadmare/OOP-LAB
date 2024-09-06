#include <iostream>
using namespace std;

class demo {
public:
	int val;
	int *p;

	demo() {
		val = 1;
		p = new int;
		*p = 2;
		cout <<"Constructor" << endl;
	}

	demo(demo &obj) {                                         
		val = 3;
		p = new int;
		cout << "Copy Constructor" << endl;
	}
	
	~demo() {
	    delete(this -> p);
	    cout << "Destructor" << endl;
	}
};

int main() {
    demo obj1;
    demo obj2 = obj1;
    demo *obj3 = new demo;
    
    *obj2.p = 4;
    obj3 -> val = 5;
    *obj3 -> p = 6;
  
    cout << "\nobj1.val: "<< obj1.val << "\n" << "obj1.p:   "<< *obj1.p << endl;
    cout << "obj2.val: "<< obj2.val << "\n" << "obj2.p:   "<< *obj2.p << endl;
    cout << "obj3.val: "<< obj3-> val << "\n" << "obj3.p:   "<< *obj3->p << "\n" << endl;
  
    delete(obj3);
    return 0;
}
