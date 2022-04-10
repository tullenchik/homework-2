#ifndef FF_H
#define FF_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class Complex_number {
	double real = 0, mnimoe = 0;
public:
	Complex_number(double valueREAL, double valueMNIMOE) {
		real = valueREAL;
		mnimoe = valueMNIMOE;
	}
	Complex_number summ(Complex_number n1);
	Complex_number substraction(Complex_number n1);
	Complex_number multyply(Complex_number n1);
	Complex_number division(Complex_number n1);
	double modul();
	void console_output_complex_number();
	~Complex_number() {
	}
};
class circle {
private:
	double pi = atan(1) * 4, r = 0;
public:
	circle(double r) {
		this->r = r;
	}
	double getDiametr();
	double lenght();
	double square();
	~circle() {
	}
};
class vector {
private:
	double c1 = 0.0, c2 = 0.0, c3 = 0.0;
public:
	vector(double valueC1,double valueC2,double valueC3) {
		c1 = valueC1;
		c2 = valueC2;
		c3 = valueC3;
	}
	void output_vector();
	vector summa(vector n);
	double scalar(vector n);
	double corner(vector n);
	double vectorial(vector n);
	double mixed(vector n, vector n2);
	~vector() {
	}
};
#endif
