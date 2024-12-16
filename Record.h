#pragma once
#include <string>
using namespace std;
#include <ctime>
class Record
{
private:
	static int nextId;
	int recordId;
	string studentId;
	string courseId;
	time_t recordDate;
public:
	Record();
	Record(string& studentId, string& courseId);
	string getStudentId() const;
	string getCourseId() const;
	string getRecordDate() const;
	void display();
};

