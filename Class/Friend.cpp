#include<iostream>
using namespace std;

class Student{

	private:
		int fees;
	public:
		Student(){
			fees=1;
		}

		friend void getFees(Student s);
		friend class Office;
};

class Office{
	public:
		void printFees(Student s){
			cout<<s.fees<<endl;
		}
};


void getFees(Student s){
	cout<<s.fees<<endl;
}


int main(){
	Student s;
	getFees(s);

	Office o;
}