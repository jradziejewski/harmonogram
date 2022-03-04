#include <iostream>
#include "Time.h"

int main() {
	Time clock;

	do {
		std::cout << "Podaj sekundy: ";
		std::cin >> clock.seconds;
		if (clock.seconds < 0 || clock.seconds > 59) std::cout << "Bledny format. Sprobuj ponownie\n";
	} while (clock.seconds < 0 || clock.seconds > 59);

	do {
		std::cout << "Podaj minuty: ";
		std::cin >> clock.minutes;
	} while (clock.minutes < 0 || clock.minutes > 59);

	do {
		std::cout << "Podaj godzine: ";
		std::cin >> clock.hours;
	} while (clock.hours < 0 || clock.hours > 23);

	clock.printActualTime();
}