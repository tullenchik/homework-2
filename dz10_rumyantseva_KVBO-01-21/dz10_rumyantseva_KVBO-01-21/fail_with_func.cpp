#include "Header.h"	
void Student::print() {
	Human(this->surname,this->name,this->midname,this->age).print();
	cout << ", Находится";
	if (on_lesson)
		cout << " на уроке\n";
	else
		cout << " не на уроке\n";
}
void Boss::print() {
	Human(this->surname, this->name, this->midname, this->age).print();
	cout << ", Количество работников в подчинении: " << number_of_workers << endl;
}