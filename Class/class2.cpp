#include<iostream>
#include<cstring>
using namespace std;
class Student{
		int id;
		char name[10];
	public:
		int getId(){
			return id;
		}
		
		void setId(int val){
			id=val;
		}

		void setName(char *name1){
			strcpy(name,name1);
		} 

		char * getName(){
			return name;
		}
		
};

int main(){
	Student s;
	s.setId(1);
	s.setName("KIT");
	cout<<s.getId()<<endl;
	cout<<s.getName()<<endl;
}