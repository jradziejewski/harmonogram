#pragma once
class Time {
private:
	int seconds = 0, hours = 0, minutes = 0;
public:
	void printActualTime();
	void setSeconds(int number);
	void setMinutes(int number);
	void setHours(int number);
};
