#ifndef FF_H
#define FF_H
#include<iostream>
#include<algorithm>
using namespace std;
void sorting_by_inserts(int* mass, unsigned n); 
void sorting_by_inserts(double* mass, unsigned n);
void delete_memory(double* mass);
void delete_memory(int* mass);
void random_values(int* arr1, unsigned n);
void random_values_for_double(double* arr1, unsigned n);
void output_to_the_cosole(int* arr, unsigned n);
void output_to_the_cosole(double* arr, unsigned n);
#endif