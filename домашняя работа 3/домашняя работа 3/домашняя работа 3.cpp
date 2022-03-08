#include "Header.h"
int main()
{
    srand(time(NULL));
    circle buffer;
    vectors bufferV,n1,n2,n3;
    n1.c1 = (1 + rand() % 100 - 50) / 2;
    n1.c2 = (1 + rand() % 100 - 50) / 2;
    n1.c3 = (1 + rand() % 100 - 50) / 2;
    n2.c1 = (1 + rand() % 100 - 50) / 2;
    n2.c2 = (1 + rand() % 100 - 50) / 2;
    n2.c3 = (1 + rand() % 100 - 50) / 2;
    n3.c1 = (1 + rand() % 100 - 50) / 2;
    n3.c2 = (1 + rand() % 100 - 50) / 2;
    n3.c3 = (1 + rand() % 100 - 50) / 2;
    setlocale(0, "");
    cout << "Круг с радиусом: " << (buffer.fill_the_infornation_circle(1)).r;
    cout << "\nДиаметр данного круга: " << buffer.diametr(circle(buffer.fill_the_infornation_circle(1)));
    cout << "\nДлина данной окружности: " << buffer.lenght(circle(buffer.fill_the_infornation_circle(1)));
    cout << "\nПлощадь круга: " << buffer.square(circle(buffer.fill_the_infornation_circle(1)));
    cout << "\nКоординаты векторов: \nI вектор: ";    
    bufferV.output_vectors(n1);
    cout << "\nII вектор: ";
    bufferV.output_vectors(n2);
    cout << "\nIII вектор: ";
    bufferV.output_vectors(n3);
    cout << "\nСумма 1 и 2 векторов: ";
    bufferV.output_vectors(n1.summa(n2));
    cout << "\nCумма 1 и 3 векторов: ";
    bufferV.output_vectors(n1.summa(n3));
    cout << "\nCумма 2 и 3векторов: ";
    bufferV.output_vectors(n2.summa(n3));
    cout << "\nСкалярное произведение 1 и 2 векторов: "<<n1.scalar(n2);
    cout << "\nСкалярное произведение 1 и 3 векторов: " << n1.scalar(n3);
    cout << "\nСкалярное произведение 3 и 2 векторов: " << n3.scalar(n2);
    cout << "\nУгол между 1 и 2 векторами: " << acos(n1.corner(n2)) << " градусов";
    cout << "\nУгол между 1 и 3 векторами: " << acos(n1.corner(n3)) << " градусов";
    cout << "\nУгол между 3 и 2 векторами: " << acos(n3.corner(n2)) << " градусов";
    cout << "\nВекторное про изведение 1 и 2 векторов: " << n1.vectorial(n2);
    cout << "\nВекторное про изведение 1 и 3 векторов: " << n1.vectorial(n3);
    cout << "\nВекторное про изведение 3 и 2 векторов: " << n3.vectorial(n2);
    cout << "\nСмешанное произведение: " << n3.mixed(n1, n2);
}
