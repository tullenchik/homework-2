// Вариант 3: реализовать сортировку вставками для целых чисел, а затем перегрузить её для дробных
#include "ff.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int n = 0;
    cout << "Введите количество чисел, которые будут сортироваться: ";
    cin >> n;
    if (!cin) {
        cout << "Вы ввели неправильное число!Попробуйте снова!";
    }
    double* arr = new double[n];
    int* arr1 = new int[n];
    random_values(arr1, n);
    random_values_for_double(arr, n);
    output_to_the_cosole(arr1,  n);
    output_to_the_cosole(arr, n);
    sorting_by_inserts( arr1,  n);
    sorting_by_inserts(arr, n);
    output_to_the_cosole(arr1, n);
    output_to_the_cosole(arr, n);
    delete_memory(arr);
    delete_memory(arr1);
}
