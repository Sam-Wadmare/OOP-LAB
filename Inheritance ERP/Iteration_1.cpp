/*
TODO :
1] store it in heap 
2] Should be dynamic (no fixed size array)
3] Use a single array (person) instead of student & Teacher
4] use flags to identify if person[cnt] is teacher or student --> set flag while entering details --> when displaying differentiate by using flag
5] Research on how to identify which element is at current position in array
*/



/*
ITERATION 1:

> Stores objects on stack
> All cin / couts in main

*/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX 15

class Person{
    private:
        unsigned int id;
        char name[10];
        
    public:
    	unsigned int getID(){
    		return this->id;
    	}
    	
    	char* getName(){
            return this->name;
        }
        
        void setName(char* stdname){
            strncpy(name , stdname , sizeof(name));
        }
        
        void setID(unsigned int stdID){
        	this -> id = stdID;
        }
};

class Student:public Person{
    private:
        int fees;
	public:
		unsigned int getFees(){
    		return this->fees;
    	}
    	void setFees(unsigned int stdFees){
    		 this -> fees = stdFees;
    	}
};

class Teacher:public Person{
    private:
        int salary;
    public:
    	unsigned int getSalary(){
    		return this -> salary;
    	}
    	void setSalary(unsigned int tchrSalary){
    		 this -> salary = tchrSalary;
    	}
};

/*develop a menu driven program with following options
1. create student -- should create object of student and store it in array
2. create teacher -- should create object of teacher and store it in array
3. display all objects -- display all teacher and student objects.
4. exit -- exit from the program
- the program shall loop until user selects exit option
*/

int main(){
	int choice;
	int scount = 1;
	int tcount = 1;
	char name[10];
	unsigned int id,money;
	
	Student s[MAX];
	Teacher t[MAX];
	
	cout << "ERP System" << endl;
	while (choice != 4){
		cout << "\nMenu: \n 1]Add Student\n 2]Add Teacher \n 3]Display All\n 4]Exit \nEnter Your Choice:" << endl;
		cin >> choice;
		switch (choice){
			case 1:
			//student creation...
		 		cout << "Student :" << endl;
				cout << "Enter Student ID:";
				cin >> id;
				s[scount].setID(id);
				
				cout << "Enter Student Name:";
				cin >> name;
				s[scount].setName(name);
				
				cout << "Enter Student Fees:";
				cin >> money;
				s[scount].setFees(money);
				
				scount++;
				break;
			
			
			
			case 2:
			//teacher creation...
			
				cout << "Teacher Details:" << endl;
				cout << "Enter Teacher ID:" ;
				cin >> id;
				t[tcount].setID(id);
				
				cout << "Enter Teacher Name:" ;
				cin >> name;
				t[tcount].setName(name);
				
				cout << "Enter Teacher Salary:";
				cin >> money;
				t[tcount].setSalary(money);
				
				tcount++;
				break;
			
			case 3:
			//display all...
				cout << "Student & Teacher list:" << endl;
				cout << "\nStudent Data:" <<endl;
				cout << "sr.no |ID        |Name      |Fees     \n---------------------------------------------" << endl;
				for(int i = 1;i<scount;i++){
					cout<<i<<"   "<< s[i].getID() << " " << s[i].getName() << " " << s[i].getFees()<<endl;
				}
				cout << "\nTeacher Data:" << endl;
				cout << "sr.no |ID        |Name      |Salary\n---------------------------------------------" << endl;
				for(int i = 1;i<scount;i++){
					cout<<i << "   " << t[i].getID()<<" "<<t[i].getName() << " " << t[i].getSalary() << endl;
				}
				break;
			
			case 4: 
			    // exit option
				cout << "\nExiting..."<< endl;
				break;
				
			default:
				cout << "Please enter a valid option." << endl;
				break;
		}
	}
	return 0;
}
