#include"ff.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    string choice = "";
    int n = 0,n1=0;
    int* arr2 = new int[12];
    cout << "Программа автоматически выделяет память для массива перед началом работы, и удаляет его после выхода или, если пользователь захочет создать новый\n";
    cout << "Введите количество ячеейк в массиве: ";
    cin >> n;
    double* mass = new double[n];
TryAgain1:
    menu_output1();
    cin >> choice;
    if (choice == "1") {
        n = retrun_kol1();
        mass = create_massiv1(mass, n, choice, n1);
    }
    random_value1(mass, n, choice);
    output_to_the_console1( mass, n, choice);
    delete_memory1(mass, n, choice);
    if (choice == "4") {
        goto task2;
    }
    goto TryAgain1;
task2:
    for (int i = 0; i < 12; i++) {
        arr2[i] = rand() % 100 - 50;
    }
    data_output_int2(arr2, 12);
    task2(arr2);
    data_output_int2(arr2, 12);
    delete_memory_int2(arr2);
    int lines = array_size_lines3();
    int columns = array_size_columns3();
    double** massiv = creating_memory3(lines, columns);
    fill_random_values3(massiv, lines, columns);
    output_double_massiv3(massiv, lines, columns);
    delete_memory_task3(massiv, lines, columns);
}