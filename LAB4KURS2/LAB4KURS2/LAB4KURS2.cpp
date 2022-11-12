//Шищак Ігор КІ2-21-4
#include "Header.h"
#include "iostream"
#include <atlbase.h>
using namespace std;

void main()
{
	string name;
	Student stud, stud2, stud3, stud4, stud5;
	Student *opp = new Student();
	Teacher techh;
	int arrSize=10;
	int* arr = new int[arrSize];
	int len, num=0;
	string course;
	Student reg;
	int mark = 0;
	Teacher pri;
	reg.coursereg();
	stud.printstudent("student.txt");
	stud.ShowStudent("student.txt");
	//// Пункт 7
	Teacher* teach[2];
	Student students[2];
	//// Пункт 6
	Teacher* tch = new Teacher();
	Teacher* tch2 = new Teacher();
	Teacher* tch3 = new Teacher();
	Teacher* tch4 = new Teacher();
	Teacher* tch5 = new Teacher();
	// Пункт 8
	tch->mark = 2;
	tch2->mark = 4;
	tch3->mark = 3;
	tch4->mark = 1;
	tch5->mark = 5;
	int mark_arr[] = { tch->mark,tch2->mark,tch3->mark,tch4->mark,tch5->mark };
	int size = sizeof(mark_arr) / sizeof(mark_arr[0]);
	teach[0] = tch;
	teach[1] = tch2;
	BSTR bstrTagName=0;
	//students[0] = stud;
	//students[1] = stud2;
	Student factinal(5);
	/*Student factinal(5, 7);//14
	Student factinal;*/
	//// Пункт 9
	try//5,6 punkt
	{
		throw tch->Service_dynamic();
	}
	catch (int a)
	{
		cerr << "\nEnter value: " << a << endl;
	} 
	try//punkt 7
	{
		throw Service(stud);
	}
	catch (string value)
	{
		cerr << "VALUE: " << value << endl;
	}
	int menu;
	do
	{ 
		cout << "enter value2:";
	cin >> menu;
	switch (menu)
	{
	case 1:
		stud.create();
		cout << "create " << endl;
	case2:
		stud.deletelem(bstrTagName);
		cout << "\ndelete"<<endl;
	default:
		break;
	}
	} while (menu != 3);
	Student* bp = new Teacher;
	bp->kt();
	bp->Student::kt();//punkt 11
	opp->message();
	opp = &techh;//punkt 10
	opp->message();

	tch->isumark(stud);
	tch->tek();//18
	tch->Service_dynamic();
	tch->Service_static();
	stud.idclass();
	stud.kkkkt();
	tch->printmmr(); //Пункт 11
	tch->Sort(tch->mark, tch2->mark, tch3->mark, tch4->mark, tch5->mark);
	
}