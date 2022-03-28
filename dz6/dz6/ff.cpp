#include"ff.h"
void sorting_by_inserts(int* mass, unsigned n) {
    for (int i = 0; i < n; i++) {
        for (int j = i ;j>0 &&mass[j-1]>mass[j];j--){
            swap(mass[j - 1], mass[j]);
        }
    }
}
void sorting_by_inserts(double* mass, unsigned n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j > 0 && mass[j - 1] > mass[j]; j--) {
            swap(mass[j - 1], mass[j]);
        }
    }
}
void delete_memory(double* mass) {
    delete[]mass;
}
void delete_memory(int* mass) {
    delete[]mass;
}
void random_values(int* arr1, unsigned n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr1[i] = rand() % 100 - 50;
    }
}
void random_values_for_double(double* arr1, unsigned n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr1[i] = (rand() % 100 - 50) * 0.3;
    }
}
    void output_to_the_cosole(int* arr, unsigned n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
void output_to_the_cosole(double* arr, unsigned n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}