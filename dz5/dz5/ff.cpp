#include"ff.h"
void menu_output1() {
	setlocale(LC_ALL, "rus");
	cout << "\n����:\n1)������� ����� ������ � ������� ����������\n2)�������� ������ ���������� ���������\n3)�������� ������ � �������\n4)����� �� ���������\n";
}
int retrun_kol1() {
	int n = 0;
	setlocale(LC_ALL, "rus");
	cout << "\n������� ���������� ����� � �������: ";
	cin >> n;
	return n;
}
void delete_memory1(double* mass, int n) {
		delete []mass;
		setlocale(LC_ALL, "rus");
		cout << "\n������ ������� ������";
}
double* create_massiv1(int n) {
	setlocale(LC_ALL, "rus");
		cout << "\n������ ������� ������";
		return new double[n];
}
void random_value1(double* mass, int n,string choice) {
	setlocale(LC_ALL, "rus");
	if (choice == "2") {
		srand(time(NULL));
		for (int i = 0; i < n; i++) {
			mass[i] = rand() % 100 - 50;
		}
		cout << "\n������ ������� �������� ���������� ����������";
	}
}
void output_to_the_console1(double* mass, int n,string choice) {
	setlocale(LC_ALL, "rus");
	if (choice == "3") {
		for (int i = 0; i < n; i++) {
			cout << mass[i] << " ";
		}
		cout << "\n������ ������� ������� � �������";
	}
}
//������ ����� �������
void data_output_int2(int* mass, int n) {
	cout << "\n";
	for (int i = 0; i < n; i++) {
		cout << mass[i] << " ";
	}
}
void task2(int* mass) {
	for (int i = 0; i < 12; i++) {
		if (i % 2 == 0) {
			int buf = mass[i];
			mass[i] = mass[i + 1];
			mass[i + 1] = buf;
		}
	}
}
void delete_memory_int2(int* mass) {
	delete []mass;
	setlocale(LC_ALL, "rus");
	cout << "\n������� � �������� ������ ������";
}
int array_size_lines3() {
	int n = 0;
	setlocale(LC_ALL, "rus");
	cout << "\n������� ���������� �����: ";
	cin >> n;
	return n;
}
int array_size_columns3() {
	int s = 0;
	setlocale(LC_ALL, "rus");
	cout << "\n������� ���������� ��������: ";
	cin >> s;
	return s;
}
double** creating_memory3(int n,int p) {
	if ((n >= 1) and (p >= 1)) {
		double** mass=new double*[n];
		for(int i=0;i<n;i++){
			mass[i] = new double[p];
		}
		return mass;
	}
}
void fill_random_values3(double** mass, int n, int p) {
	for (int i=0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			mass[i][j] = (rand() % 40 + 10);
		}
	}
}
void output_double_massiv3(double** massiv, int n, int p) {
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
	setlocale(LC_ALL, "rus");
	for(int j = 0; j < n; j++) {
		delete[] mass[j];
	}
	delete[] mass;
	cout << "\n����� �������! �������� ��� :)";
}
