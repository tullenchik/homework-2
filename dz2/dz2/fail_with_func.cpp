#include"head.h"
void output_to_the_console(int* mass, unsigned size){
	for (int i = 0; i < size; i++){
		cout << mass[i] << "   ";
	}
	cout << endl;
}
void func_check(string choice){
	setlocale(0, "");
	if ((!((choice == "1")|| (choice == "2") || (choice == "3") || (choice == "4") || (choice == "5") || (choice == "6") || (choice == "7") || (choice == "8") || (choice == "9") || (choice == "10"))) || (!cin)){
		cout << "�� ����� ������������ ��������! ���������� �����\n";
	}
}
void menu_output(int x){
	setlocale(0, "");
	cout << "\n���������: ��������� �������\n���������� ������ �������� ������";
	cout << "\n��������, ����� ������� �� ������ �������\n1)��������� ���������� ����������";
	cout << "\n2)��������� ���������� � ����������\n3)������� ��� �������� ��������������";
	cout << "\n4)������� ��� �������� ��������������\n5)�������� ��� �������� �� ��������� ������������� �������";
	cout << "\n6)������������� ������\n7)�������� �� �������� ��������\n8)�������� ��� �������� ������� �� �����, ��������� �������������\n";
	cout << "9)������������ ������ ����� ���������\n10)����� �� ���������\n";
}
void random_values(int* arr, unsigned size){
	srand(time(0));
	for (int i = 0; i < size; i++){
		arr[i] = rand() % 100 - 50;
	}
}
void manual_input(int* arr, unsigned size) {
	setlocale(0, "");
	cout << "\n��������� ������ � ����������:\n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void positive_values(int* arr, unsigned size){
	for (int i = 0; i < size; i++){
		if (arr[i] < 0)	{
			arr[i] = arr[i] * (-1);
		}
	}
}
void negative_values(int* arr, unsigned size){
	for (int i = 0; i < size; i++){
		if (arr[i] > 0){
			arr[i] = arr[i] * (-1);
		}
	}
}
void indentical_elements(int* arr, unsigned size) {
	setlocale(0, "");
	double a;
	cout << "\n������� �������, �� ������� �� ������ �������� ��� �������� � �������:\n";
	cin >> a;
	for (int i = 0; i < size; i++) {
		arr[i] = a;
	}
}
void multiplication(int* arr, unsigned size) {
	setlocale(0, "");
	double a;
	cout << "\n������� �����, �� ������� �� ������ �������� ��� �������� �������:\n";
	cin >> a;
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] * a;
	}
}
void inver_an_array(int* arr, unsigned size){
	for (int i = 0; i < size / 2; i++){
		int tmp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = tmp;
	}
}
void inverse_values(int* arr, unsigned size){
	for (int i = 0; i < size; i++){
		arr[i] = 1 / arr[i];
	}
}
void universal_function(int* arr, unsigned size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	for (int i = 0; i < size; i++){
		if (sum == arr[1]){
			inver_an_array(arr,size);
		}
	}
	if (sum > arr[1]){
		sort(arr, arr + size);
	}
	if(sum<arr[1]) {
		sort(arr, arr + size);
		for (int i = 0; i < size; i++){
			inver_an_array(arr,size);
		}
	}
}
void(*function_selection(string choice))(int*, unsigned)
{
	if (choice == "1") {
		return random_values;
	}
	if (choice == "2") {
		return manual_input;
	}
	if (choice == "3") {
		return positive_values;
	}
	if (choice == "4") {
		return negative_values;
	}
	if (choice == "5") {
		return indentical_elements;
	}
	if (choice == "8") {
		return multiplication;
	}
	if (choice == "6") {
		return inver_an_array;
	}
	if (choice == "7") {
		return inverse_values;
	}
	if (choice == "9") {
		return universal_function;
	}
	if (choice == "10") {
		cout << "";
	}
}
	
