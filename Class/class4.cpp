#include<iostream>
using namespace std;

class Demo{
	public:
		int val;
		static int si;
	Demo(){
		val=1;
	}
	
	void data(int val){
		this->val=val;
	}

};

int Demo::si=1;

int main(){
	Demo d1;
	d1.data();
	Demo d2;
	d2.si=2;
	d1.data();
	d2.data();
}
