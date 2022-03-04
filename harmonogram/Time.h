#pragma once
class Time {
public:
	int seconds = 0, hours = 0, minutes = 0;
	void printActualTime();
	void getSeconds(int number);
	void getMinutes(int number);
	void getHours(int number);
};
