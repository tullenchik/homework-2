#ifndef Header
#define Header
#include <iostream>
#include <cstdlib>
using namespace std;
class Human {
protected:
	string surname,name,midname;
	int age = 0;
public:
	Human(string surname1 = "�����������", string name1 = "�������", string midname1 = "������������", int age1 = 0) :surname(surname1), name(name1), midname(midname1), age(age1) {}
	virtual void print() { cout << "\n�������: " << surname << ", ���: " << name << ", ��������: " << midname << ", �������: " << age; };
	~Human() {}
};
class Student : public Human {
	bool on_lesson;
public:
	Student(string surnameStd, string nameStd, string midnameStd, int ageStd, bool on_lesson1=0) :Human(surnameStd,nameStd,midnameStd,ageStd),on_lesson(on_lesson1) {}
	void print();
};
class Boss : public Human {
	int number_of_workers;
public:
	Boss(string surname, string name, string midname, int age, int number_of_workers1) :Human(surname, name, midname, age),number_of_workers(number_of_workers1) {}
	void print();
};


#endif Header