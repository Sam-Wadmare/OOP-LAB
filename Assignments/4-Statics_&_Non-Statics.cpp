#include <iostream>
#include <cstring>
using namespace std;

#define MAX 15

class Student{
	private:
		int rollNo;//roll number shall be auto assigned every time you create a object
		char name[10];

	public:
		static int cnt;
		Student(){
           		 cnt++;
           		 rollNo = cnt;
        	}//constructor
		
		int getRollNo(){
            		return rollNo;
       		} //Getter Method for Roll No
		
        	char* getName(){
            		return name;
        	}//Getter Method for Name
		
        	void setName(char* stdname){
            		strncpy(name , stdname , sizeof(name));
        	}//Setter Method for Name
};

int Student::cnt = 0;

int main(){

    /* Expected Outcomes :  
       1. develop menu driven program
	   2. Add Student - shall create and add Student object in student array
	   3. Display Student - shall display all students present in the array
	   4. Display Student by id - shall display the student with specific id in the array
	*/


    char name[10];
    Student s[MAX];
    int option;
    int count = 0;

    cout << "Student Management System\n---------------------------" << endl;
    while(option != 4){
        cout << "\nMenu: \n 1]Add Student \n 2]View All Students \n 3]Search By Roll No \n 4]Exit \nSelect an option: ";//Menu
        cin >> option;
        switch (option) {
            case 1 : 
                // Student Creation / Addition Option
                cout << "\n--> Add Student :\n    Enter Student Name : ";
                cin >> name;
                s[count].setName(name);
                count++;
                break;

            case 2 : 
                // Student Listing option
                cout << "\n--> View All Students : \n"<<endl;
                cout << "Roll No   |  Name\n----------|-------------" << endl;
                for (int i = 0 ; i < count ; i++){
                    cout <<  s[i].getRollNo() << " \t  :  " << s[i].getName() << endl;
                }
                break;

            case 3 : 
                // Search by ID option
                int search ;
                cout << "\n--> Search by ID : \n    Enter student Roll No : ";
                cin >> search ;
                cout << "\nName: " << s[search-1].getName() << " | Roll No: " << s[search-1].getRollNo() << endl;
                break;

            case 4 : 
                // Exit option
                cout << "Exiting..." <<endl;
                return 0;

            default : 
                cout << "Please select a valid option"<< endl;
                break;
        }
    }
    return 0;
}
