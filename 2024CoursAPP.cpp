#include <string>
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Utility.h"
#include "2024CoursAPP.h"
using namespace std;

int main()
{
	InitializeData();
}

void InitializeData()
{

	Student student1("A123456789", "郭", "威廷", "男", "2002-09-20", "4B0G0044", Department::ComputerSciece, ClassName::_4A);
	student1.display();

	cout << endl;
	Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
	Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
	Course course3("C003", "Python Programming", "這門課程教授Python程式語言");

	vector<Course> teacher1_courses = { course1, course2, course3 };

	Teacher teacher1("T123456789", "王", "大富", "男", "1980-7-1", "T001", Department::ComputerSciece, ClassName::_1A, teacher1_courses);

	cout << "----------------" << endl;
	teacher1.display();
}
