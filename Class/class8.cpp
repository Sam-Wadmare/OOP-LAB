#include<iostream>
using namespace std;

class Person{
	private:
		int id;
		
	public:
		static int cnt;
		Person(int i){
			id=cnt++;
			cout<<"This is Person"<<endl;

		}
		int getId(){
			return id;
		}		
};
int Person::cnt=0;

class Student:public Person{
	public:
		int fees;
		Student():Person(1){
			cout<<"This is Student"<<endl;
		}
};


int main(){
	Student s1;
	s1.fees=1000;
	cout<<s1.getId()<<" "<<s1.fees<<endl;

	


}