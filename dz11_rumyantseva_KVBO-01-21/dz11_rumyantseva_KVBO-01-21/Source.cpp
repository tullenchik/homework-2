#include "head.h"
void screen::print()
{
	if (this->built_in_screen) {
		cout << "\n���������� ����� ���������";
	}
	else {
		cout << "\n���������� ����� �� ���������";
	}
	if (this->HDMI) {
		cout << "\n����� ��������� ����� ���� HDMI";
	}
	else {
		cout << "\n����� �� ��������� ����� ���� HDMI";
	}
}
void keyboard::print()
{
	if (this->built_in_keyboard) {
		cout << "\n���������� ���������� ����������";
	}
	else {
		cout << "\n���������� ���������� �� ����������";
	}
	if (this->USB) {
		cout << "\nUSB-���������� ����������";
	}
	else {
		cout << "\nUSB-���������� �� ����������";
	}
	if (this->digital) {
		cout << "\n����������� ���������� ����������";
	}
	else {
		cout << "\n����������� ���������� �� ����������";
	}
}
void notebook::print() {
	cout << "\n �������:\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void personal_computeer::print(){
	cout << "\n ������������ ���������\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void phone::print(){
	cout << "\n �������\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void fill_rand(notebook a){
	srand(time(NULL));
	int z = rand() % 2,x= rand() % 2;
	a.fill_USB(z);
	a.fill_HDMI(x);
}
void fill_rand(personal_computeer a)
{
	srand(time(NULL));
	int z = rand() % 2, x = rand() % 2;
	a.fill_USB(z);
	a.fill_HDMI(x);
}
void fill_rand(phone a)
{
	int z = rand() % 2, x = rand() % 2,c= rand() % 2;
	a.fill_built_in_keyboard(z);
	a.fill_USB(x);
	a.fill_HDMI(c);
}