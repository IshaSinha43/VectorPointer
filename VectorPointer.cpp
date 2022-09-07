#include "windows.h"
#include <iostream>
#include <vector>
using namespace std;

typedef struct Student
{
	char name[256];
	int roll = 0;
	char address[100];
}Student;


class TaskVector
{
public:
	int currentStudents;
	vector <Student*> students;
	TaskVector()			//constructor
	{
		currentStudents = 0;

	}

	~TaskVector()		//Destructor
	{
		
		students.clear();
		
	}
	void clear()
	{	
		for (vector<Student*>::iterator iter = students.begin(); iter != students.end(); iter++)
		{
			delete (*iter);
			*iter = NULL;
		}
	}
	
	void TestVector()
	{
		
		Student objStudent;
		for (auto cntr = 0; cntr < 2; cntr++)
		{
			Student* objStudent = new Student();
			cout << "Enter student name and roll number and address: ";
			objStudent->name;
			cin >> objStudent->name;
			objStudent->roll;
			cin >> objStudent->roll;
			objStudent->address;
			cin >> objStudent->address;
			students.push_back(objStudent);

		}

		cout << "Size : " << students.size() << endl;

		//objStudent.name take input from key board
		//objStudent.roll take input from key board

		//students.push_back(objStudent)

	}
	void Display()
	{
	
		for (vector<Student*>::iterator iter = students.begin(); iter != students.end(); iter++)
		{
			cout << "Name: " << (*iter)->name << " \n" << "Roll no: " << (*iter)->roll <<  " \n" << "Address: " << (*iter)->address<<endl;
		}
	}
};

int main()
{

	TaskVector v;
	v.TestVector();
	v.Display();


	system("pause");
	return 0;
}






