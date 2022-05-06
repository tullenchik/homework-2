#include "Header.h"
void menu() {
	setlocale(LC_ALL, "rus");
	cout << "����.\n1.�������� ������ �������� � ���������\n2.������� �������� �� ���������\n3.������������� ��������� �� �����\n4.������������� ��������� �� �������\n5.������������� ��������� �� �����\n6.������������� ��������� �� �������� �����\n7.������� ��������� � �������\n8.����� �� ���������\n������� ����� ����, ������� �� ������ �������:";
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
		cout << "\n�� ����� ������������ ��������!\n";
	}
	else {
		cout << "�������" << arr[number].return_name() << arr[number].return_name() << endl;
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
	os << "\n��� ��������(��): " << arr.name <<" ������� ��������(��): " << arr.surname <<" ����, �� ������� ������ �������(��): " << arr.course << " ������� ���� ��������(��): " << arr.raiting;
	return os;
}
istream& operator>>(istream& is,  Student& arr) {
	setlocale(LC_ALL, "rus");
	cout << "\n��� ��������(��): ";
	is >> arr.name;
	cout << "\n������� ��������(��): ";
	is >> arr.surname;
	tryCourseAgain:
	cout << "\n����, �� ������� ������ �������(��): ";
	is >> arr.course;
	if (!is) {
		cout << "\n�� ����� �������� ��������! ���������� ����� ;)";
		goto tryCourseAgain;
	}
	tryRaitingeAgain:
	cout << "\n������� ���� ��������(��): ";
	is >> arr.raiting;
	if (!is) {
		cout << "\n�� ����� �������� ��������! ���������� ����� ;)";
		goto tryRaitingeAgain;
	}
	cout << endl;
	return is;
}
void funcchoice(vector<Student>& arr,string choice) {
	setlocale(LC_ALL, "rus");
	if (choice == "1") {
		arr.push_back(addStudent());
		cout << "\n����� ������� ������\n";
	}
	if (choice == "2") {
		if (!arr.empty()) {
			int number = 0;
			tryDeleteStudentAgain:
			cout << "\n�������� ����� ��������, �������� �� ������ ������� �� ���������: ";
			cin >> number;
			if (!cin) {
				cout << "\n�� ����� �������� ��������! ���������� �����!\n";
				goto tryDeleteStudentAgain;
			}
			delete_Student_in_kartoteka(arr, number);
		}
		else {
			cout << "\n��������� �����! ������ ��� ������� ��������� �� ���������, ��������� �.\n";
		}
	}
	if (choice == "3") {
		sort(arr.begin(), arr.end(), compare_by_name);
		cout << "\n��������� ������������ �� ������:\n";
	}
	if (choice == "4") {
		sort(arr.begin(), arr.end(), compare_by_surname);
		cout << "\n��������� ������������� �� �������:\n";
	}
	if (choice == "5") {
		sort(arr.begin(), arr.end(), compare_by_course);
		cout << "\n��������� ������������� �� �����:\n";
	}
	if (choice == "6") {
		sort(arr.begin(), arr.end(), compare_by_raiting);
		cout << "\n��������� ������������� �� �������� �����:\n";
	}
	if (choice == "7") {
		cout << "����� ��������� � �������:" << endl;
		put_to_the_console_student(arr);
	}
	if (choice == "8") {
		cout << "\n������ ��������� ���������. �������� ���!\n";
	}
}