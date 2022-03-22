#include"ff.h"
void menu_outout1(){
	setlocale(0, "");
	cout << "\nМеню:\n1)Создать массив\n2)Заполнить массив с клавиатуры\n3)Вывод на экран\n4)Выход из программы\n";
}
void func_check1(string choice) {
	setlocale(0, "");
	if ((choice == "1") or (choice == "2") or (choice == "3"))
	{
		cout<<"";
	}
	else {
		cout<<"\nВы ввели число, не входящее в пункты меню! попробуйте снова!\n";
	}
}
int array_size(string choice) {
	setlocale(0, "");
	if (choice == "1") {
		int n = 0;
		cout << "Введите размер массива: ";
		cin >> n;
		return n;
	}
}
double* creating_memory(int n,string choice) {
	if (choice == "1") {
		if (n >= 1) {
			return new double[n];
		}
	}
}
void fill_data_keyboard(double* mass, string choice,int n){
	if (choice == "2") {
		for (unsigned i = 0; i < n; i++) {
			cin >> mass[i];
		}
	}
}
void data_output(double* mass, string choice,int n) {
	if (choice == "3") {
		for (unsigned i = 0; i < n; i++) {
			cout << mass[i] << " ";
		}
	}
}
void delete_memory(double* mass,string choice){
	setlocale(0, "");
	if (choice == "4") {
		mass = NULL;
		cout << "\nПереход к второму пункту задачи";
	}
}
void data_output_int(int* mass, int n) {
	cout << "\n";
		for (unsigned i = 0; i < n; i++) {
			cout << mass[i] << " ";
		}
}
int* task2(int* mass) {
	for (int i = 0; i < 12; i++) {
		if (i % 2 == 0) {
			int buf = mass[i];
			mass[i] = mass[i + 1];
			mass[i + 1] = buf;
		}
	}
	return mass;
}
void delete_memory_int(int* mass) {
	setlocale(0, "");
	mass = NULL;
		cout << "\nПереход к третьему пункту задачи";
}
int array_size_lines() {
	setlocale(0, "");
	int n = 0;
	cout << "\nВведите количество строк: ";
	cin >> n;
	return n;
}
int array_size_columns() {
	setlocale(0, "");
	int s = 0;
	cout << "\nВведите количество столбцов: ";
	cin >> s;
	return s;
}
double** creating_memory(int n,int p) {
	if ((n >= 1) and (p >= 1)) {
		double** mass=new double*[n];
		for(int i=0;i<n;i++){
			mass[i] = new double[p];
		}
		return mass;
	}
}
double** fill_random_values(double** mass, int n, int p) {
	for (int i=0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			mass[i][j] = (rand() % 40 + 10);
		}
	}
	return mass;
}
void output_double_massiv(double** massiv, int n, int p) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			if (j == 0) {
				cout << endl;
			}
			cout << massiv[i][j]<<" ";
		}
	}
}
void delete_memory_task3(double** mass,int n,int p) {
	setlocale(0, "");
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < p; j++) {
			mass[i] = NULL;
		}
	}
	mass = NULL;
	cout << "\nКонец задания! Удачного дня :)";
}