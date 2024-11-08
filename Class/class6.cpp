#include<iostream>
using namespace std;

class Student{

	public:
		int rollNo=0;
		static int cnt;
		static void disp1();
		void disp(){
			cout<<this->rollNo<<endl;
		}
		Student(){
			cnt++;
			rollNo=cnt;
		}
};

int Student::cnt=0;

void Student::disp1(){
	cout<<"disp1 method of Student"<<endl;
}

int main(){

	Student s1;
	Student s2;
	Student s3;
	s1.disp();
	s2.disp();
	s3.disp();
	Student::disp1();

}