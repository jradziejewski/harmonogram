class Time {
public: 
	int seconds = 0, hours = 0, minutes = 0;
	void printActualTime();
};

void Time::printActualTime() {
	std::cout << hours << ":";
	if (minutes > 9) std::cout << minutes;
	else std::cout << "0" << minutes;
	std::cout << ":";
	if (seconds > 9) std::cout << seconds;
	else std::cout << "0" << seconds;

}