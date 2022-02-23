//Напишите программу которая вызывает различные виды функции в зависимости от заданного условия.
#include "head.h"
int main()
{
    setlocale(0, "");
    //-----------------------------------------------------объявление переменных
    int mass[10] = { 0,0,0,0,0,0,0,0,0,0 };
    string choice="";
    unsigned kol = (sizeof(mass)) / (sizeof(mass[0]));
    //-----------------------------------------------------проверка ввода
tryAgain:
    do {
        menu_output(1);
        cin >> choice;
        func_check(choice);
        system("pause");
    } while ((!((choice == "1") || (choice == "2") || (choice == "3") || (choice == "4") || (choice == "5") || (choice == "6") || (choice == "7") || (choice == "8") || (choice == "9") || (choice == "10"))) || (!cin));
    //-----------------------------------------------------функция выбора
    function_selection(mass, kol,choice,random_values,manual_input,positive_values,negative_values,indentical_elements,multiplication,inver_an_array,inverse_values,universal_function);
    if (choice == "10"){
        cout << "До свиданья!:)";
        exit(0);
    }
    goto tryAgain;
}
