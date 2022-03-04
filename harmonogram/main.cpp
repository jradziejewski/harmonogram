#include <iostream>
#include "Time.h"


int main() {
	Time clock;
	int menu = true;

	while (menu) {
		char option;
		std::cout << "1. Ustaw sekundy \n2. Ustaw minuty \n3. Ustaw godziny\n4. Opusc program\n";
		std::cin >> option;

		switch (option) {
		case '1': 
			std::cout << "\n\nPodaj liczbe sekund\n\n";
			break;
		case '2':
			std::cout << "\n\nPodaj liczbe minut\n\n";
			break;
		case '3':
			std::cout << "\n\nPodaj liczbe godzin:\n\n";
			break;
		case '4':
			menu = false;
			break;
		default:
			std::cout << "Zla opcja";
			break;
		}
	}
	//do {
	//	std::cout << "Podaj sekundy: ";
	//	std::cin >> clock.seconds;
	//	if (clock.seconds < 0 || clock.seconds > 59) std::cout << "Bledny format. Sprobuj ponownie\n";
	//} while (clock.seconds < 0 || clock.seconds > 59);

	//do {
	//	std::cout << "Podaj minuty: ";
	//	std::cin >> clock.minutes;
	//} while (clock.minutes < 0 || clock.minutes > 59);

	//do {
	//	std::cout << "Podaj godzine: ";
	//	std::cin >> clock.hours;
	//} while (clock.hours < 0 || clock.hours > 23);

	clock.printActualTime();
}