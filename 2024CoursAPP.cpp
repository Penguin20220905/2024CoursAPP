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
	students.push_back(Student("I001", "郭", "威廷", "男", "2002-09-20", "S001",
		Department::ComputerSciece, ClassName::_4A));
	students.push_back(Student("I002", "王", "小廷", "男", "2002-09-21","S002",
		Department::ElectricalEngineering, ClassName::_4A));
	students.push_back(Student("I003", "陳", "小威", "男", "2002-09-22", "S003",
		Department::InformationManagement, ClassName::_4A));
	students.push_back(Student("I004", "劉", "廷", "男", "2002-09-23", "S004",
		Department::ComputerSciece, ClassName::_4A));
	students.push_back(Student("I005", "林", "威", "男", "2002-09-24", "S005",
		Department::ElectricalEngineering, ClassName::_4A));
	//新增老師資料
	vector<Course>teacher1_courses = { courses[0],courses[1],courses[2]};
	teachers.push_back(Teacher("I101", "陳", "定宏", "男", "1977-01-01", "T001",
		Department::ComputerSciece, ClassName::_2A, teacher1_courses));
	teachers.push_back(Teacher("I102", "許", "子恆", "男", "1977-02-02", "T002",
		Department::InformationManagement, ClassName::_2B, teacher1_courses));
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
		cout << "6. 查詢課程資料" << endl;
		cout << "7. 查詢教師資料" << endl;
		cout << "8. 查詢選課紀錄" << endl;
		cout << "9. 新增學生資料" << endl;
		cout << "10. 新增課程資料" << endl;
		cout << "11. 新增教師資料" << endl;
		cout << "12. 新增選課紀錄" << endl;

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
		case 5:
			cout << "查詢學生資料" << endl;
			queryStudent();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;	
		case 6:
			cout << "查詢課程資料" << endl;
			queryCourse();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 7:
			cout << "查詢教師資料" << endl;
			queryTeacher();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 8:
			cout << "查詢選課紀錄" << endl;
			queryRecord();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 9:
			cout << "新增學生資料" << endl;
			addStudent();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 10:
			cout << "新增課程資料" << endl;
			addCourse();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 11:
			cout << "新增教師資料" << endl;
			addTeacher();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
		case 12:
			cout << "新增選課紀錄" << endl;
			addRecord();
			cout << "按任意鍵繼續..." << endl;
			system("pause");
			break;
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

void queryStudent()
{
	string studentId;
	cout << "請輸入學生學號:";
	cin >> studentId;

	bool found = false;
	for (auto student : students) {
		if (student.getStudentId() == studentId) {
			student.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到學生資料" << endl;
	}
	
}

void queryCourse()
{
	string courseId;
	cout << "請輸入課程編號:";
	cin >> courseId;
	bool found = false;
	for (auto course : courses) {
		if (course.getCourseId() == courseId) {
			course.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到課程資料" << endl;
	}
}

void queryTeacher()
{
	string teacherId;
	cout << "請輸入教師編號:";
	cin >> teacherId;
	bool found = false;
	for (auto teacher : teachers) {
		if (teacher.getTeacherId() == teacherId) {
			teacher.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到教師資料" << endl;
	}
}

void queryRecord()
{
	string studentId, courseId;
	cout << "請輸入學生學號:";
	cin >> studentId;
	cout << "請輸入課程編號:";
	cin >> courseId;

	bool found = false;
	for (auto record : records) {
		if (record.getStudentId() == studentId && record.getCourseId() == courseId) {
			record.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到選課紀錄" << endl;
	}
}

void addStudent()
{
	string Id,studentId, lastName, firstName, birthDate, genger;
	int departmentChoice, classNameChoice;

	cout << "請輸入學生身分證字號:";
	cin >> Id;
	cout << "請輸入學生姓氏:";
	cin >> lastName;
	cout << "請輸入學生名字:";
	cin >> firstName;
	cout << "請輸入學生性別:";
	cin >> genger;
	cout << "請輸入學生生日:";
	cin >> birthDate;
	cout << "請輸入學生學號:";
	cin >> studentId;
	
	cout << "請輸入學生科系:" << endl;
	for (int i = 0; i < static_cast<int>(Department::Last); i++) {
		cout << i << "." << Utility::toString(static_cast<Department>(i)) << endl;
	}
	cout << "請選擇科系:";
	cin >> departmentChoice;
	Department department = static_cast<Department>(departmentChoice);

	cout << "請輸入學生班級:" << endl;
	for (int i = 0; i < static_cast<int>(ClassName::Last); i++) {
		cout << i << "." << Utility::toString(static_cast<ClassName>(i)) << endl;
	}
	cout << "請選擇班級:";
	cin >> classNameChoice;
	ClassName className = static_cast<ClassName>(classNameChoice);

	students.push_back(Student(Id, lastName, firstName, genger, birthDate, studentId, department, className));
}

void addCourse()
{
	string courseId, courseName, courseDescription;
	cout << "請輸入課程編號:";
	cin >> courseId;
	cout << "請輸入課程名稱:";
	cin >> courseName;
	cout << "請輸入課程描述:";
	cin >> courseDescription;
	courses.push_back(Course(courseId, courseName, courseDescription));
}

void addTeacher()
{
	string Id, teacherId, lastName, firstName, birthDate, genger;
	int departmentChoice, classNameChoice;
	vector<Course> courses;
	cout << "請輸入教師身分證字號:";
	cin >> Id;
	cout << "請輸入教師姓氏:";
	cin >> lastName;
	cout << "請輸入教師名字:";
	cin >> firstName;
	cout << "請輸入教師性別:";
	cin >> genger;
	cout << "請輸入教師生日:";
	cin >> birthDate;
	cout << "請輸入教師編號:";
	cin >> teacherId;
	cout << "請輸入教師科系:" << endl;
	for (int i = 0; i < static_cast<int>(Department::Last); i++) {
		cout << i << "." << Utility::toString(static_cast<Department>(i)) << endl;
	}
	cout << "請選擇科系:";
	cin >> departmentChoice;
	Department department = static_cast<Department>(departmentChoice);
	cout << "請輸入教師班級:" << endl;
	for (int i = 0; i < static_cast<int>(ClassName::Last); i++) {
		cout << i << "." << Utility::toString(static_cast<ClassName>(i)) << endl;
	}
	cout << "請選擇班級:";
	cin >> classNameChoice;
	ClassName className = static_cast<ClassName>(classNameChoice);
	teachers.push_back(Teacher(Id, lastName, firstName, genger, birthDate, teacherId, department, className, courses));
}

void addRecord()
{
	string studentId, courseId;
	cout << "請輸入學生學號:";
	cin >> studentId;
	cout << "請輸入課程編號:";
	cin >> courseId;
	records.push_back(Record(studentId, courseId));
}
