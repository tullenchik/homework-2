#include "Header.h"
void menu() {
	setlocale(LC_ALL, "rus");
	cout << "Меню.\n1.Добавить нового студента в картотеку\n2.Удалить студента из картотеки\n3.Отсортировать картотеку по имени\n4.Отсортировать картотеку по фамилии\n5.Отсортировать картотеку по курсу\n6.Отсортировать картотеку по среднему баллу\n7.Вывести картотеку в консоль\n8.Выход из программы\nВведите пункт меню, который вы хотите выбрать:";
}
void Student::getName(string name) { this->name = name; }
string Student::return_name() { return this->name; }
void Student::getSurname(string surname) { this->surname = surname; }
string Student::return_surname() { return this->surname; }
void Student::getCourse(int course) { this->course = course; }
int Student::return_course() { return this->course; }
void Student::getRaiting(double raiting) { this->raiting = raiting; }
double Student::return_raiting() { return this->raiting; }
bool compare_by_name(Student  first, Student second) { return first.return_name()[0] < second.return_name()[0]; }
bool compare_by_surname(Student first, Student second) { return first.return_surname()[0] < second.return_surname()[0]; }
bool compare_by_course(Student first, Student second) { return first.return_course() < second.return_course(); }
bool compare_by_raiting(Student first, Student second) { return first.return_raiting() < second.return_raiting(); }
Student addStudent() {
	Student newStudent;
	cin >> newStudent;
	return newStudent;
}
int calculate_size_vector(vector<Student>& arr) {
	int lenght=0;
	if (!arr.empty()) {
		lenght++;
	}
	return lenght;
}
void delete_Student_in_kartoteka(vector<Student>& arr, int number) {
	setlocale(LC_ALL, "rus");
	if (calculate_size_vector(arr) < number) {
		cout << "\nВы ввели неправильное значение!\n";
	}
	else {
		cout << "Студент" << arr[number].return_name() << arr[number].return_name() << endl;
		arr.erase(arr.begin() + number);
	}
}
void put_to_the_console_student(vector<Student> arr) {
	for (Student i : arr) {
		cout << i << endl;
	}
}
Student& Student::operator=(const Student& i)
{
	this->name = i.name;
	this->surname = i.surname;
	this->course = i.course;
	this->raiting = i.raiting;
	return *this;
}
ostream& operator<<(ostream& os, const Student& arr) {
	setlocale(LC_ALL, "rus");
	os << "\nИмя студента(ки): " << arr.name <<" Фамилия студента(ки): " << arr.surname <<" Курс, на котором учится студент(ка): " << arr.course << " Средний балл студента(ки): " << arr.raiting;
	return os;
}
istream& operator>>(istream& is,  Student& arr) {
	setlocale(LC_ALL, "rus");
	cout << "\nИмя студента(ки): ";
	is >> arr.name;
	cout << "\nФамилия студента(ки): ";
	is >> arr.surname;
	tryCourseAgain:
	cout << "\nКурс, на котором учится студент(ка): ";
	is >> arr.course;
	if (!is) {
		cout << "\nВы ввели неверное значение! Попробуйте снова ;)";
		goto tryCourseAgain;
	}
	tryRaitingeAgain:
	cout << "\nСредний балл студента(ки): ";
	is >> arr.raiting;
	if (!is) {
		cout << "\nВы ввели неверное значение! Попробуйте снова ;)";
		goto tryRaitingeAgain;
	}
	cout << endl;
	return is;
}
void funcchoice(vector<Student>& arr,string choice) {
	setlocale(LC_ALL, "rus");
	if (choice == "1") {
		arr.push_back(addStudent());
		cout << "\nНовый студент создан\n";
	}
	if (choice == "2") {
		if (!arr.empty()) {
			int number = 0;
			tryDeleteStudentAgain:
			cout << "\nНапишите номер студента, которого вы хотите удалить из картотеки: ";
			cin >> number;
			if (!cin) {
				cout << "\nВы ввели неверное значение! Попробуйте снова!\n";
				goto tryDeleteStudentAgain;
			}
			delete_Student_in_kartoteka(arr, number);
		}
		else {
			cout << "\nКартотека пуста! Прежде чем удалять студентов из картотеки, заполните её.\n";
		}
	}
	if (choice == "3") {
		sort(arr.begin(), arr.end(), compare_by_name);
		cout << "\nКартотека отсортирован по именам:\n";
	}
	if (choice == "4") {
		sort(arr.begin(), arr.end(), compare_by_surname);
		cout << "\nКартотека отсортирована по фамилии:\n";
	}
	if (choice == "5") {
		sort(arr.begin(), arr.end(), compare_by_course);
		cout << "\nКартотека отсортирована по курсу:\n";
	}
	if (choice == "6") {
		sort(arr.begin(), arr.end(), compare_by_raiting);
		cout << "\nКартотека отсортирована по среднему баллу:\n";
	}
	if (choice == "7") {
		cout << "Вывод картотеки в консоль:" << endl;
		put_to_the_console_student(arr);
	}
	if (choice == "8") {
		cout << "\nРабота программы закончена. Удачного дня!\n";
	}
}