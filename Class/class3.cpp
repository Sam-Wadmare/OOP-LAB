#include<iostream>
using namespace std;

class Demo{
	public:
		int val;
		int *p;
	Demo(){
		cout<<"Default Constructor"<<endl;
		val=1;
		p=new int;
		*p=1;
	}

	Demo(Demo &obj){
		p=new int;
		cout<<"Copy Constructor"<<endl;
	}
	
	~Demo(){
		delete(p);
		cout<<"destructor"<<endl;
	}
};

int main(){
	Demo *obj3=new Demo;

	Demo obj1;
	obj1.val=1;
	Demo obj2=obj1;
	obj2.val=2;
	*obj2.p=2;
	cout<<obj1.val<<" "<<obj2.val<<endl;
	cout<<*obj1.p<<" "<<*obj2.p<<endl;
	cout<<"this is the end of the program"<<endl;
	delete(obj3);
	
}






