#include <string>
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include"Record.h"
#include "Utility.h"
#include "2024CoursAPP.h"
using namespace std;

vector<Student> students;
vector<Teacher>teachers;
vector<Course>courses;
vector<Record>records;

int main()
{
	initializeData();
	displayMenu();
}

void initializeData()
{

	/*Student student1("A123456789", "郭", "威廷", "男", "2002-09-20", "4B0G0044", Department::ComputerSciece, ClassName::_4A);
	student1.display();

	cout << endl;
	Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
	Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
	Course course3("C003", "Python Programming", "這門課程教授Python程式語言");

	vector<Course> teacher1_courses = { course1, course2, course3 };

	Teacher teacher1("T123456789", "王", "大富", "男", "1980-7-1", "T001", Department::ComputerSciece, ClassName::_1A, teacher1_courses);

	cout << "----------------" << endl;
	teacher1.display();*/
	//新增課程資料
	courses.push_back(Course("C001", "C++ Programming", "這門課程教授C++程式語言"));
	courses.push_back(Course("C002", "Java Programming", "這門課程教授Java程式語言"));
	courses.push_back(Course("C003", "Python Programming", "這門課程教授Python程式語言"));
	courses.push_back(Course("C004", "C# Programming", "這門課程教授C#程式語言"));
	courses.push_back(Course("C005", "Visual Basic Programming", "這門課程教授Visual Basic程式語言"));
	//新增學生資料
	students.push_back(Student("S001", "郭", "威廷", "男", "2002-09-20", "S001",
		Department::ComputerSciece, ClassName::_4A));
	students.push_back(Student("S002", "王", "小廷", "男", "2002-09-21","S002",
		Department::ElectricalEngineering, ClassName::_4A));
	students.push_back(Student("S003", "陳", "小威", "男", "2002-09-22", "S003",
		Department::InformationManagement, ClassName::_4A));
	students.push_back(Student("S004", "劉", "廷", "男", "2002-09-23", "S004",
		Department::ComputerSciece, ClassName::_4A));
	students.push_back(Student("S005", "林", "威", "男", "2002-09-24", "S005",
		Department::ElectricalEngineering, ClassName::_4A));
	//新增老師資料
	vector<Course>teacher1_courses = { courses[0],courses[1],courses[2] };
	teachers.push_back(Teacher("T001", "陳", "定宏", "男", "1977-01-01", "T001",
		Department::ComputerSciece, ClassName::_1A, teacher1_courses));
	teachers.push_back(Teacher("T002", "許", "子恆", "男", "1977-02-02", "T002",
		Department::InformationManagement, ClassName::_1B, teacher1_courses));
	//新增選課紀錄
	records.push_back(Record("S001", "C001"));
	records.push_back(Record("S001", "C002"));
	records.push_back(Record("S002", "C001"));
	records.push_back(Record("S002", "C002"));


}

void displayMenu() {
	int choice;
	do {
		system("cls");
		cout << "==================" << endl;
		cout << "1. 列出學生資料" << endl;
		cout << "2. 列出課程資料" << endl;
		cout << "3. 列出教師資料" << endl;
		cout << "4. 列出選課紀錄" << endl;
		cout << "5. 查詢學生資料" << endl;
		cout << "0. 退出" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "列出學生資料" << endl;
			listStudents();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 2:
			cout << "列出課程資料" << endl;
			listCourses();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 3:
			cout << "列出教師資料" << endl;
			listTeachers();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 4:
			cout << "列出選課資料" << endl;
			listRecords();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		/*case 5:
			cout << "查詢學生資料" << endl;
			for(auto student:students)
				if (student.getStudentI) {

				}
			break;*/
		case 0:
			cout << "退出" << endl;
			break;
		default:
			cout << "無效選擇" << endl;
			break;
		}
	} while (choice != 0);
}

void listRecords()
{
	cout << "選課紀錄總共有" << courses.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto record : records) {
		record.display();
		cout << endl;
	}
	cout << endl;
}

void listTeachers()
{
	cout << "教師資料總共有" << courses.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto teacher : teachers) {
		teacher.display();
		cout << endl;
	}
	cout << endl;
}

void listCourses()
{
	cout << "列出課程資料" << courses.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto course : courses) {
		course.display();
		cout << endl;
	}
	cout << endl;
}

void listStudents()
{
	cout << "學生資料總共有" << students.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto student : students) {
		student.display();
		cout << endl;
	}
	cout << endl;
}
