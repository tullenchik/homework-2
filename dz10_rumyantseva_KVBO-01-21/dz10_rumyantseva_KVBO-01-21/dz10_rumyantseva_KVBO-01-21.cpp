#include "Header.h"
int main() {
	setlocale(0, "");
	Human human( "Румянцева", "Наталия", "Михайловна", 50);
	Student student("Румянцева", "Елизаевта", "Ивановна", 19, 1);
	Boss boss("Иван", "Румянцев", "Валентинович", 50, 200);
	human.print();
	student.print();
	boss.print();
}