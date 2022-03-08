#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include<cstdlib>
#define M_PI
using namespace std;
struct circle {
	double r=0;
	circle fill_the_infornation_circle(bool j);
	double diametr(circle n);
	double lenght(circle n);
	double square(circle n);
};
struct vectors {
	double c1 = 0.0, c2 = 0.0,c3=0.0;
	void output_vectors(vectors n);
	vectors summa(vectors n);
	double scalar(vectors n);
	double corner(vectors n);
	double vectorial(vectors n);
	double mixed(vectors n,vectors n2);
};
#endif
