#include "Printer.h"//�������� ��������� ���������
//��������� �������, ������� ��������� �������
void toPrint(string str)
{
	for (int i = 0; i < str.length(); i++)//���� �� ������ ������
	{
		cout << (char)toupper(str[i]);//������� toupper ��������� �������������� �������� ���� � ���������
	}
}
