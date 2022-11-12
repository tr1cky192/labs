//Шищак Ігор КІ2-21-4
#include "Header.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

Optional Student::coursereg()
{
	cout << "Enter name" << endl;
	cin >> op.name;
	cout << "Enter course" << endl;
	cin >> op.course;
	cout << "Enter your group" << endl;
	cin >> op.group;
	cout << op.name << endl << op.course << endl << op.group << endl;

	return op;
}
void Student::printstudent(string student_name) {
	ofstream student;
	student.open(student_name);
	student << name << endl;
	student.close();
}
void Student::ShowStudent(string student_name) {
	ifstream student(student_name);
	

	if (student.is_open())
	{
		while (getline(student, student_name))
		{
			cout << student_name << "\n";
		}

		student.close();
	}
}
void Teacher::isumark(Student student) {
	ofstream bal;// Пункт 5
	bal.open("marks.txt");
	cout << "Enter mark" << endl;
	cin >> mark;
	cout << "Enter name" << endl;
	cin >> name;
	bal << name << endl << mark;
	bal.close();
}//13
void Teacher::printmmr() {
	ifstream bal;// Пункт 5
	bal.open("marks.txt");
	string marks_text;
	if (bal.is_open())
	{
		while (getline(bal, marks_text))
		{
			cout << marks_text << "\n";
		}
		bal.close();
	}
}
void Teacher::Sort(int stud1, int stud2, int stud3, int stud4, int stud5) {
	vector<int> mark{ stud1, stud2, stud3, stud4, stud5 };
	sort(mark.begin(), mark.end());

	for (auto x : mark)
		cout << x << " ";

}
string Student::ReturnCourse(string course) {
	static string reg_course = course;
	return reg_course;
}
int markaverage(int arr[], Teacher tch)
{
	for (int i = 0;i < 5;i++)
	{
		tch.average += arr[i];//16
	}
	tch.average /= 5;
	return tch.average;
}
int markaverage(int arr[], Teacher& tch, int size)//11
{
	for (int i = 0;i < 5;i++)
	{
		tch.average += arr[i];
	}
	tch.average /= 5;
	return tch.average;
}//12
cour::cour() {
	mar = mark;
	name_course = course;
}
cour::cour(int otsinka) {
	mar = otsinka;
}
void archive::marksprint() {
		cout << otsinka;
}
int Student::kt() {
	return 69;//punkt 11
}
void Student::kkkkt() {//punkt 4,11
	cout << Student::kt() << endl;//punkt 11
}
//void abs::idclass() {//punkt 2
//	cout << "clear" << endl;
//};
void Student::message() {
	//punkt 9

	cout << " LOSE" << endl;
}
void Student::create() {
	HRESULT createElement(
		BSTR bstrTagName,
		IXMLDOMElement * *ppElement
	);
	exit;
}
void Student::deletelem(BSTR bstrTagName) {
	delete[] bstrTagName;
}
void Student::enterspec() {
	pyfik.enterspec(spes);
}
void Student::swap() {
	pyfik.swapcourse(course);
}
 Student::~Student(){
	 cout << "virtual destr!" << endl;//punkt 3
}
 void Teacher::kttk() {
	 cout << Teacher::kt();
}
 void Teacher::message() {
	 cout << "I won" << endl;//punkt 9
 }
 int Teacher::Service_dynamic() {
	 //punkt 6 
	 int arr[10], tot = 10, i, elem, j, found = 0;
	 for (i = 0; i < tot; i++)
	 {
		 arr[i] = rand() % 10;

	 }
	 for (i = 0;i < tot;i++)
	 {
		 cout << arr[i];
	 }
	 cout << "\nEnter Element to Delete: ";
	 cin >> elem;
	 for (i = 0; i < tot; i++)
	 {
		 if (arr[i] == elem)
		 {
			 for (j = i; j < (tot - 1); j++)
				 arr[j] = arr[j + 1];
			 found++;
			 i--;
			 tot--;
		 }
	 }
	 if (found == 0)
		 cout << "\nElement doesn't found in the Array!";
	 else
		 cout << "\nElement Deleted Successfully!";
	 cout << endl;
	 for (i = 0;i < tot;i++)
	 {
		 cout << arr[i];
	 }
	 return arr[i];
 }
 void Teacher::Service_static() {
	 //punkt6
	 int mass[] = { 8,3,225,2,3,5,9,0 };

	 int index;
	 int size = sizeof(mass) / sizeof(mass[0]);
	 for (int i = 0;i < size;i++) {
		 cout << mass[i] << ' ';
	 }
	 cout << "Enter index" << endl;
	 cin >> index;
	 memmove(&mass[index], &mass[index + 1], size - (index + 1));
	 mass[--size] = 0;
	 for (int i = 0;i < size;i++) {
		 cout << mass[i] << ' ';
	 }
 }
 void Teacher::tek() {
	 student.swap();//18
 }
 int archive::zap() {
	 otsinka = markss.mark;
	 return otsinka;
 }
 void Teacher::spec::enterspec(string special) {
	 cin >> special;
	 cout << special;
 }
 void Teacher::spec::swapcourse(string course) {
	 cout << "Enter new course ";
	 cin >> course;

 }
 string Teacher::getteachname() {
	 string lox;
	 cin >> lox;
	 return lox; //17
 }
