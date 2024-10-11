//    Shital Patil
//    B77
//    Assi-1 Class & Objects

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	// used unsigned int because normal int cant hold PRN like 232400000,etc
	unsigned int ID;
	string Name;

public:
	void setID(unsigned int id)
	{
		ID = id;
	}

	void setName(string name)
	{
		Name = name;
	}

	unsigned int getID()
	{
		return ID;
	}

	string getName()
	{
		return Name;
	}
};

int main()
{
	Student std1;
	std1.setID(2324001011);
	std1.setName("Shital Patil");

	cout << "ID: " << std1.getID() << endl;
	cout << "Name: " << std1.getName() << endl;

	// get from user
	Student std2;
	string name;
	unsigned int id;

	cout << "\n\nEnter Student Name : " << endl;
	getline(cin, name);
	std2.setName(name);

	cout << "Enter Student ID : " << endl;
	cin >> id;
	std2.setID(id);

	cout << "\nID: " << std2.getID() << endl;
	cout << "Name: " << std2.getName() << endl;

	return 0;
}
