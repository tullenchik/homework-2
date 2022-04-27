#include"ff.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    string choice = "";
    int n1 = 0,n2=0,n3=0;
    int* arr2 = new int[12];
    double* mass = new double[2];
    cout << "Программа автоматически выделяет память для массива перед началом работы, и удаляет его после выхода или, если пользователь захочет создать новый\n";
TryAgain1:
    menu_output1();
    cin >> choice;
    if (choice == "1") {
        n1 = retrun_kol1();
        if (n1 >= 1) {
            delete_memory1(mass, n1);
            mass = create_massiv1(n1);
        }
        else {
            cout << "\nВведено неверное значение меньше 1!. Попробуйте снова " << endl;
            goto TryAgain1;
        }
    }
    random_value1(mass, n1,choice);
    output_to_the_console1(mass, n1,choice);
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