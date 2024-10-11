//    Shital Patil
//    B77
//    Assi-2 Abstraction&Encapsulation

//Math.h-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Math {
public:
	int add(int a, int b) {
		return a + b;
	}

	int sub(int a, int b) {
		return a - b;
	}

	int multiply(int a, int b) {
		return a * b;
	}

	int divide(int a, int b) {
		return a / b;
	}
};

//Math.cpp --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "Math.h"

int add(int,int);
int sub(int,int);
int multiply(int,int);
int divide(int,int);

//main.cpp---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "Math.h"
#include <iostream>
using namespace std;

int main() {
	Math obj;

	cout << "Addition : " << obj.add(5, 5) << endl;
	cout << "Subtraction : " << obj.sub(5, 5) << endl;
	cout << "Multiplication : " << obj.multiply(5, 5) << endl;
	cout << "Division : " << obj.divide(5, 5) << endl;

	return 0;
}
