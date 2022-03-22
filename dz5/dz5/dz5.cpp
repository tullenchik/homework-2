#include"ff.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    string choice = "";
    int n = 0;
    int* arr2 = new int[12];
    cout << "Прогрмамма автоматически выделяет память для массива перед началом работы, и удаляет его после выхода\n";
TryAgain1:
    do {
        menu_outout1();
        cin >> choice;
        func_check1(choice);
        system("pause");
    } while (!((choice == "1") || (choice == "2") || (choice == "3") || (choice == "4")));
    n = array_size(choice);
    double* mass = creating_memory(n, choice);
    fill_data_keyboard(mass, choice, n);
    data_output(mass, choice, n);
    delete_memory(mass, choice);
    if (choice == "4") {
        goto task2;
    }
    goto TryAgain1;
    cout << endl;
task2:
    for (int i = 0; i < 12; i++) {
        arr2[i] = rand() % 100 - 50;
    }
    data_output_int(arr2, 12);
    task2(arr2);
    data_output_int(arr2, 12);
    delete_memory_int(arr2);
    int lines = array_size_lines();
    int columns = array_size_columns();
    double** massiv = creating_memory(lines, columns);
    fill_random_values(massiv, lines, columns);
    output_double_massiv(massiv, lines, columns);
    delete_memory_task3(massiv, lines, columns);
}