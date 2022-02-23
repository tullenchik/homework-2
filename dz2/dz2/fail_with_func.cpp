#include"head.h"
//---------------------------------------------------------����� ������
void output_to_the_console(int* mass, unsigned size){
	for (int i = 0; i < size; i++){
		cout << mass[i] << " ";
	}
	cout << endl;
}
void func_check(string choice){
	if ((!((choice == "1")|| (choice == "2") || (choice == "3") || (choice == "4") || (choice == "5") || (choice == "6") || (choice == "7") || (choice == "8") || (choice == "9") || (choice == "10"))) || (!cin)){
		cout << "�� ����� ������������ ��������! ���������� �����\n";
	}
}
void menu_output(int x){
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
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
}
void manual_input(int* arr, unsigned size) {
	cout << "\n��������� ������ � ����������:\n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		cout << arr[i]<<" ";
	}
}
void positive_values(int* arr, unsigned size){
	for (int i = 0; i < size; i++){
		if (arr[i] < 0)	{
			arr[i] = arr[i] * (-1);
		}
		cout << arr[i] << " ";
	}
}
void negative_values(int* arr, unsigned size){
	for (int i = 0; i < size; i++){
		if (arr[i] > 0){
			arr[i] = arr[i] * (-1);
		}
		cout << arr[i] << " ";
	}
}
void indentical_elements(int* arr, unsigned size) {
	double a;
	cout << "\n������� �������, �� ������� �� ������ �������� ��� �������� � �������:\n";
	cin >> a;
	for (int i = 0; i < size; i++) {
		arr[i] = a;
		cout << arr[i] << " ";
	}
}
void multiplication(int* arr, unsigned size) {
	double a;
	cout << "\n������� �����, �� ������� �� ������ �������� ��� �������� �������:\n";
	cin >> a;
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] * a;
		cout << arr[i] << " ";
	}
}
void inver_an_array(int* arr, unsigned size){
	for (int i = 0; i < size / 2; i++){
		int tmp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = tmp;
	}
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
}
void inverse_values(int* arr, unsigned size){
	for (int i = 0; i < size; i++){
		arr[i] = 1 / arr[i];
		cout << arr[i] << " ";
	}
}
void universal_function(int* arr, unsigned size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	for (int i = 0; i < size; i++){
		if (sum == arr[1]){
			for (int i = 0; i < size / 2; i++)	{
				int tmp = arr[i];
				arr[i] = arr[size - 1 - i];
				arr[size - 1 - i] = tmp;
			}
		}
	}
	if (sum > arr[1]){
		sort(arr, arr + size);
	}
	else {
		sort(arr, arr + size);
		for (int i = 0; i < size / 2; i++){
			int tmp = arr[i];
			arr[i] = arr[size - 1 - i];
			arr[size - 1 - i] = tmp;
		}
	}
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
}
void function_selection(int* arr, unsigned size, string choice, void (*random_values)(int*, unsigned), void (*manual_input)(int*, unsigned), void (*positive_values)(int*, unsigned), void (*negative_values)(int*, unsigned), void (*indentical_elements)(int*, unsigned), void (*multiplication)(int*, unsigned), void (*inver_an_array)(int*, unsigned), void (*inverse_values)(int*, unsigned), void (*universal_function)(int*, unsigned)){
	if (choice == "1"){
		random_values(arr, size);
	}
	if (choice == "2"){
		manual_input(arr, size);
	}
	if (choice == "3"){
		positive_values(arr, size);
	}
	if (choice == "4"){
		negative_values(arr, size);
	}
	if (choice == "5"){
		indentical_elements(arr, size);
	}
	if (choice == "8"){
		multiplication(arr, size);
	}
	if (choice == "6"){
		inver_an_array(arr, size);
	}
	if (choice == "7"){
		inverse_values(arr, size);
	}
	if (choice == "9"){
		universal_function(arr, size);
	}
	if (choice == "10"){
		cout << "";
	}
}
