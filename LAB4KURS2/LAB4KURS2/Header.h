//Шищак Ігор КІ2-21-4
// СЛОВО punkt - до 5 лаби завдання
#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <atlbase.h>

using namespace std;
extern string teacher_na;//12
class Student;
class Teacher;
struct Optional
{
	string course;
	string name;
	int group;
};
// Пункт 1
class abs {//punkt 1
	virtual void idclass() = 0;
	
};
class Student: public abs
{
public:
	friend Teacher;//18
	const int k;
	int kt();//punkt 11

	virtual void kkkkt();//punkt 4,11
	void abs::idclass() {//punkt 2
		cout << "clear" << endl;
	};

	virtual void  message(void);//punkt 9

	
	string& pop;
	Optional op;
	string name;
	string course;
	string spes;
	Optional coursereg();
	void printstudent(string student_name);
	void ShowStudent(string student_name);
	void create();//punkt 7
	void deletelem(BSTR bstrTagName);//punkt 7

	Student() :k(5), pop(name) {
		name = "Igor";
	}
	Student(int group) :k(5), pop(name) {
		this->group = group;
	}
	//~Student() {
	//	cout << "Bad marks";
	//}
	virtual ~Student();//punkt 3
	static string ReturnCourse(string course);
	void enterspec();
	void swap();
	/*Student(string course = "3") {
	   this->course=course;
	}*/
private:
	class spec
	{
	public:
		void enterspec(string special);
		void swapcourse(string course);
	};
	spec pyfik;
	int group;
};
class Teacher:public Student
{
public:
	Student student;// Пункт 3
	string course;
	friend Student;//18
	int mark;
	int average;
	// Пункт 4
	void isumark(Student student);//Пункт 10
	void printmmr();
	void kttk();
	void message(void);//punkt 9
	int Service_dynamic();//punkt 6 
		
	void Service_static();//punkt6
		
	void tek();
	void Sort(int stud1, int stud2, int stud3, int stud4, int stud5); //Пункт 12
private:
	string name;
	string getteachname();
	string tech_name = getteachname();
};
class archive {//10
public:
	Teacher markss;
	int otsinka;
	int zap();
	void marksprint();

};
class cour: private Teacher, archive {//9
protected:
	string name_teacher;
public:
	friend void archive::marksprint();//16
	using archive::zap;//12
	string teacher_na = name_teacher;//12
	string name_course;
	int mar;
	cour(int otsinka);//11
	cour();
};
inline string Service(Student stud)//punkt 7
{
	string student_name;
	cout << "Enter file name" << endl;
	cin >> student_name;
	stud.printstudent(student_name);
	stud.ShowStudent(student_name);
	return student_name;
}


