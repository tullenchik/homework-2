#include "Header.h"	
void Student::print() {
	Human(this->surname,this->name,this->midname,this->age).print();
	cout << ", ���������";
	if (on_lesson)
		cout << " �� �����\n";
	else
		cout << " �� �� �����\n";
}
void Boss::print() {
	Human(this->surname, this->name, this->midname, this->age).print();
	cout << ", ���������� ���������� � ����������: " << number_of_workers << endl;
}