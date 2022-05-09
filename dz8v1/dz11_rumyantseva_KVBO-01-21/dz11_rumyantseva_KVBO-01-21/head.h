#ifndef HEAD_H
#define HEAD_H
using namespace std;
#include<iostream>
class screen {
protected:
	bool built_in_screen, HDMI;//����� ������� ��� ���
public:
	screen(bool a=false, bool b=false) :built_in_screen(a), HDMI(b) {};
	virtual void print();
};
class keyboard {
protected:
	bool built_in_keyboard, USB,digital;//���������� ������� ��� ��� (��� ������ �����������)
public:
	keyboard(bool a=false, bool b = false, bool c = false) : built_in_keyboard(a), USB(b), digital(c) {};
	virtual void print();
	};
class notebook :public keyboard, screen {
public:
	notebook( bool b = false, bool e = false, bool d = false) :keyboard(1, b, 1), screen(1, d) {};//� �������� ����� ���� ���������� ���������� � ��������, � ����� ����������� ����������
	void print() ;
	void fill_USB(bool n) { this->USB = n; }
	void fill_HDMI(bool n) { this->HDMI = n; }
};
class personal_computeer :public keyboard, screen {
public:
	personal_computeer( bool b = false, bool c = false, bool d = false) :keyboard(0, b, 1), screen(0, d) {};//� ������������ ��������� ��� ���������� ���������� � ��������,�� ����������� ����������� ����������, � �������������� ������ � �������� -�����������
	void print() ;
	void fill_USB(bool n) { this->USB = n; }
	void fill_HDMI(bool n) { this->HDMI = n; }
};
class phone :public keyboard, screen {
public:
	phone(bool a = false, bool b = false, bool d = false) :keyboard(a, b, 1), screen(1, d) {};//� �������� ����� ��� ���������� ����� �����������, � ����� ������������ ���������� ���������� � �������
	void print() ;
	void fill_built_in_keyboard(bool n) { this->built_in_keyboard = n; }
	void fill_USB(bool n) { this->USB = n; }
	void fill_HDMI(bool n) { this->HDMI = n; }
};
void fill_rand(notebook a);
void fill_rand(personal_computeer a);
void fill_rand(phone a);
#endif 

