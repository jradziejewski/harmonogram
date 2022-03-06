#include <iostream>
#include "Time.h"


int main() {
	Time clock;
	bool menu = true;
	bool submenu = true;
	char suboption;
	int number;

	while (menu) {
		char option;
		std::cout << "1. Ustaw sekundy \n2. Ustaw minuty \n3. Ustaw godziny\n4. Wyswietl...\n5. Opusc program\n";
		std::cin >> option;

		switch (option) {
		case '1': 
			system("CLS");
			std::cout << "Podaj liczbe sekund: ";
			std::cin >> number;
			clock.setSeconds(number);
			break;
		case '2':
			system("CLS");
			std::cout << "Podaj liczbe minut: ";
			std::cin >> number;
			clock.setMinutes(number);
			break;
		case '3':
			system("CLS");
			std::cout << "Podaj liczbe godzin: ";
			std::cin >> number;
			clock.setHours(number);
			break;
		case '4':
			submenu = true;
			system("CLS");
			std::cout << "a. Wyswietl wszystko\nb. Wyswietl godziny\nc. Wyswietl minuty\nd. Wyswietl sekundy\ne. Powroc\n";
			
			break;
		case '5':
			system("CLS");
			menu = false;
			break;
		default:
			std::cout << "Zla opcja";
			break;
		}
	}

	clock.printActualTime();
}