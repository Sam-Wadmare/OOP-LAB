#include<iostream>
using namespace std;

class Student{

	private:
		//int fees;
	public:
		int fees;
		Student(){
			fees=1;
		}
		
		Student(int i):fees(i){}
		
		operator++(int){
			fees++;
		}

		operator++(){
			++fees;
		}
		
		int data(Student temp){
			int result=this->fees+temp.fees;
			return result;
		}
		
		Student operator+(Student temp){
			Student temp1;
			temp1.fees=fees+temp.fees;
			return temp1;
		}
};

int main(){
	Student s;
	cout<<s.fees<<endl;
	s++;
	cout<<s.fees<<endl;
	++s;
	cout<<s.fees<<endl;
	Student s1;  
	Student s2=s+s1; // ========   s.data(s1)   s.+(s1)
	cout<<s2.fees<<endl;
	Student s3=s2+1;
	Student s4=1+s3;
}
