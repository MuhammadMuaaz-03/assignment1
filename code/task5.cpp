#include<iostream>
using namespace std;
struct subjectinfo {
	string name;
	int credithour;
	int totalmarks;
	char grade;
	float gradepoints;
};

struct studentinfo {
	string stu_name;
	string enroll;
	subjectinfo sub[5];
};

int main()
{
	float x = 0, y = 0, gpa;
	studentinfo Stud1;
	Stud1.sub[0] = { "Programmming Fundamentals",4,88,'A',4.0 };
	Stud1.sub[1] = { "Compiler Construction    ",3,87,'A',4.0 };
	Stud1.sub[2] = { "OOP                      ",3,90,'A',4.0 };
	Stud1.sub[3] = { "English                  ",3,94,'A',4.0 };
	Stud1.sub[4] = { "Physics                  ",4,89,'A',4.0 };
	Stud1.enroll = "09-131252-052";
	Stud1.stu_name = "Muaaz";

	/*output*/

	cout << "   " << "Subject Name" << "         " << "Credit Hour" << "  " << "Total Marks" << "  " << "Grade" << endl;
	for (int x = 0; x < 5; x++)
	{
		cout << Stud1.sub[x].name << "  " << Stud1.sub[x].credithour << "           " << Stud1.sub[x].totalmarks << "         " << Stud1.sub[x].grade << endl;


	}
	/*gpa calculator*/
	for (int i = 0; i < 5; i++)
	{
		x = x + (Stud1.sub[i].gradepoints * Stud1.sub[i].credithour);
		y = y + Stud1.sub[i].credithour;
	}
	gpa = x / y;
	cout << "CGPA = " << gpa << endl;
}