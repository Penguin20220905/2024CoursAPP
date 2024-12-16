#include "Record.h"

Record::Record()
{
}

Record::Record(string& studentId, string& courseId):studentId(studentId),courseId(courseId), recordId(nextId++)
{
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



