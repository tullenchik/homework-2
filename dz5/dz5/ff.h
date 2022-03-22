#ifndef FF_H
#define FF_H
#include <iostream>
#include<algorithm>
using namespace std;
void menu_outout1();
int array_size(string choice);
double* creating_memory(int n, string choice);
void fill_data_keyboard(double* mass, string choice,int n);
void data_output(double* mass, string choice, int n);
void delete_memory(double* mass, string choice);
void func_check1(string choice);
void data_output_int(int* mass, int n);
int* task2(int* mass);
void delete_memory_int(int* mass);
int array_size_lines();
int array_size_columns();
double** creating_memory(int n, int p);
double** fill_random_values(double** mass, int n, int p);
void output_double_massiv(double** massiv, int n, int p);
void delete_memory_task3(double** mass, int n, int p);
#endif