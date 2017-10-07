#include <iostream>
#ifndef PLANE_H 
#define PLANE_H

struct Seat {
	char status;
	bool isBooked;
};

class Plane {
	Seat ** firstClass;
	Seat ** economy;
	int firstClassRows, firstClassCols, econRows, econCols;
public:
	Plane();
	Plane(int, int, int, int);
	void displaySeats();
	void bookSeat();
	void checkSeat();
	void clearSeat();
	void clearAllSeats();

	int getFirstClassRows();
	void setFirstClassRows(int);
	int getFirstClassCols();
	void setFirstClassCols(int);
	int getEconRows();
	void setEconRows(int);
	int getEconCols();
	void setEconCols(int);

	~Plane();
};

#endif
