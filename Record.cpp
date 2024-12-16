#include "Record.h"
#include<iostream>
#include<iomanip>
using namespace std;
Record::Record()
{
}

Record::Record(string& studentId, string& courseId):studentId(studentId),courseId(courseId), recordId(nextId++)
{
}


int Record::getRecordId() const
{
	return recordId;
}

string Record::getStudentId() const
{
	return studentId;
}

string Record::getCourseId() const
{
	return courseId;
}

string Record::getRecordDate() const
{
	char buffer[20];
	struct tm timeinfo;
	localtime_s(&timeinfo, &recordDate);
	
}



