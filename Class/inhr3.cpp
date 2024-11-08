#include<iostream>
using namespace std;
class A{
	public:
		virtual void data(){
			cout<<"data method of A"<<endl;
		}
};
class B:public A{
	public:
		void data()override{
			cout<<"data method of B"<<endl;
		}
};

int main(){
	B obj;
	obj.data();
}

