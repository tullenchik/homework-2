#include "Printer.h"//включаем созданный заголовок
//объ€вл€ем функцию, котора€ выполн€ет задание
void toPrint(string str)
{
	for (int i = 0; i < str.length(); i++)//цикл по данной строке
	{
		cout << (char)toupper(str[i]);//‘ункци€ toupper выполн€ет преобразование строчных букв в прописные
	}
}
