#include<iostream>
using namespace std;

class Student{
	int id;
	
	
	public:
		void setId(int val){
			id=val;
		}

		int getId(){
			return id;
		}
		Student(){
			cout<<"basic car"<<endl;
		}
	
};

int main(){
	Student();
	Student s;
	Student s1();

	//s.getId();
	cout<<"this is main"<<endl;
}





