#include<iostream>
using namespace std;
class Person{
	public:
		Person(){
			cout<<"Constructor of A"<<endl;
		}
		virtual void disp(){
			cout<<"I am Person"<<endl;
		}
};
class Teacher:public Person{
	public:
		Teacher(){

		}
		void disp(){
			cout<<"I am  Teacher"<<endl;
		}
};

class Student:public Person{
	public:
		Student(){}
		void disp(){
			cout<<"I am Student"<<endl;
		}
};

void displayAll(Person *p){
	p->disp();
}

int main(){
	Teacher t;
	Student s;
	displayAll(&t);
	displayAll(&s);
	return 0;
}

