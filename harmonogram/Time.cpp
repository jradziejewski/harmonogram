#include <iostream>
#include "Time.h"

void Time::getSeconds(int number) {

}

void Time::getMinutes(int number) {

}

void Time::getHours(int number) {

}

void Time::printActualTime() {
	std::cout << hours << ":";
	if (minutes > 9) std::cout << minutes;
	else std::cout << "0" << minutes;
	std::cout << ":";
	if (seconds > 9) std::cout << seconds;
	else std::cout << "0" << seconds;

}
