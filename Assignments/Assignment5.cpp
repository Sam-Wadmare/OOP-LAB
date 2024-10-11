#include <iostream>
using namespace std;

#define MAX 50

class Person {
public:
    int id;
    char name[10];
};

class Student : public Person {
public:
    int fees;
};

class Teacher : public Person {
public:
    int salary;
};


int main() {
    int choice;
    int scount = 0; 
    int tcount = 0; 
    Student std[MAX];
    Teacher tchr[MAX];

    do {
        cout << "Enter your choice: \n1) Create Student \n2) Create Teacher \n3) Display All \n4) Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                //student
                if (scount < MAX) {
                    cout << "Enter Student name: ";
                    cin >> std[scount].name;

                    cout << "Enter ID: ";
                    cin >> std[scount].id;

                    cout << "Enter Fees: ";
                    cin >> std[scount].fees;

                    scount++;
                } 
                break;
            }
            case 2: {
                //teacher
                if (tcount < MAX) {
                    cout << "Enter Teacher Name: ";
                    cin >> tchr[tcount].name;

                    cout << "Enter ID: ";
                    cin >> tchr[tcount].id;

                    cout << "Enter Salary: ";
                    cin >> tchr[tcount].salary;

                    tcount++;
                } 
                break;
            }
            case 3: {
                //Display all
                cout << "\nDisplaying Data:" << endl;

                cout << "Student Data:" << endl;
                cout << "ID\tNAME\tFEES" << endl;
                for (int i = 0; i < scount; i++) {
                    cout << std[i].id << "\t" << std[i].name << "\t" << std[i].fees << endl;
                }

                cout << "Teacher Data:" << endl;
                cout << "ID\tNAME\tSALARY" << endl;
                for (int i = 0; i < tcount; i++) {
                    cout << tchr[i].id << "\t" << tchr[i].name << "\t" << tchr[i].salary << endl;
                }
                break;
            }
            case 4:
                // Exit
                cout << "Exiting Program..." << endl;
                break;
            default:
                cout << "Enter a valid input." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
