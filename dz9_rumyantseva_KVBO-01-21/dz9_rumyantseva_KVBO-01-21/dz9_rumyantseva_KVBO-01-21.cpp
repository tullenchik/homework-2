#include "Header.h"
int main() {
	setlocale(0, "");
	double tax_of_all = 0, tax_of_all_car = 0, tax_of_all_apartaments = 0, tax_of_all_House = 0;
	Property* massive[7] = { new Apartment(0), new Apartment(0), new Apartment(0), new Car(0), new Car(0), new CountryHouse(0),new CountryHouse(0) };
	fill_the_cost_of_property_random(massive, 7);
	for (int i = 0; i < 3; i++) {
		tax_of_all_apartaments = tax_of_all_apartaments+massive[i]->tax();
	}
	for (int i = 3; i < 4; i++) {
		tax_of_all_car = tax_of_all_car +massive[i]->tax();
	}
	for (int i = 4; i < 5; i++) {
		tax_of_all_House = tax_of_all_House +massive[i]->tax();
		delete massive[i];
	}
	cout << "\nНалог за все ваши машины: " << tax_of_all_car;
	cout << "\nНалог за все ваши квартиры: " << tax_of_all_apartaments;
	cout << "\nНалог за все ваши дачи: " << tax_of_all_House;
	cout << "\nНалог за все ваше имущество: " << tax_of_all_car + tax_of_all_apartaments + tax_of_all_House;
}