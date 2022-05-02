#ifndef HEADER_HH
#define HEADER_HH
#include<fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include<algorithm>
using namespace std;
class Student {
	string name,surname;
	int course;
	double raiting;
public:
	Student(string name = "ТвоёИмя", string surname = "Твоя фамилия", int course = 0, double raiting=0.00) {
		this->name = name;
		this->surname = surname;
		this->course = course;
		this->raiting = raiting;
	}
	void getName(string name);
	string return_name();
	void getSurname(string surname);
	string return_surname();
	void getCourse(int course);
	int return_course();
	void getRaiting(double raiting);
	double return_raiting();
	Student& operator=(const Student& i);
	friend ostream& operator<<(ostream& os, const Student& other);
	friend istream& operator>>(istream& is,  Student& other);

};
bool compare_by_name(Student  first, Student second);
bool compare_by_surname(Student first, Student second);
bool compare_by_course(Student first, Student second);
bool compare_by_raiting(Student first, Student second);
int calculate_size_vector(vector<Student>& arr);
void menu();
Student addStudent();
void delete_Student_in_kartoteka(vector<Student>& arr, int number);
void put_to_the_console_student(vector<Student> arr);
void funcchoice(vector<Student>& arr, string choice);
#endif;