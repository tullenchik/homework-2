#include "head.h"
void screen::print()
{
	if (this->built_in_screen) {
		cout << "\nВстроенный экран подключен";
	}
	else {
		cout << "\nВстроенный экран не подключен";
	}
	if (this->HDMI) {
		cout << "\nЭкран подключен через порт HDMI";
	}
	else {
		cout << "\nЭкран не подключен через порт HDMI";
	}
}
void keyboard::print()
{
	if (this->built_in_keyboard) {
		cout << "\nВстроенная клавиатура подключена";
	}
	else {
		cout << "\nВстроенная клавиатура не подключена";
	}
	if (this->USB) {
		cout << "\nUSB-клавиатура подключена";
	}
	else {
		cout << "\nUSB-клавиатура не подключена";
	}
	if (this->digital) {
		cout << "\nВиртуальная клавиатура подключена";
	}
	else {
		cout << "\nВиртуальная клавиатура не подключена";
	}
}
void notebook::print() {
	cout << "\n Ноутбук:\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void personal_computeer::print(){
	cout << "\n Персональный компьютер\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void phone::print(){
	cout << "\n Телефон\n";
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