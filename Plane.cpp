#include "Plane.h"
#include <iostream>

using namespace std;

Plane::Plane() {
	cout << "Number of rows for first class: ";
	cin >> firstClassRows;
	cout << "Number of columns for first class: ";
	cin >> firstClassCols;
	cout << "Number of rows for economy: ";
	cin >> econRows;
	cout << "Number of columns for economy: ";
	cin >> econCols;

	Seat ** firstClass = new Seat*[firstClassRows];
	for(int i = 0; i < firstClassRows; i++) {
		firstClass[i] = new Seat[firstClassCols];
	}

	Seat ** economy = new Seat*[econRows];
	for(int j = 0; j < econRows; j++) {
		economy[j] = new Seat[econCols];
	}
}

Plane::Plane(int firstClassRows, int firstClassCols, int econRows, int econCols) {
	this->firstClassRows = firstClassRows;
	this->firstClassCols = firstClassCols;
	this->econRows = econRows;
	this->econCols = econCols;

	// inputing values for firstClass array
	for(int i = 0; i < firstClassRows; i++) {
		for(int j = 0; j < firstClassCols; j++) {
			firstClass[i][j].status = '-';
			firstClass[i][j].isBooked = false;
		}
	}

	// inputing values for economy array
	for(int x = 0; x < econRows; x++) {
		for(int y = 0; y < econCols; y++) {
			economy[x][y].status = '-';
			economy[x][y].isBooked = false;
		}
	}
}

int Plane::getFirstClassRows() {
	return firstClassRows;
}

void Plane::setFirstClassRows(int newFirstClassRows) {
	firstClassRows = newFirstClassRows;
}

int Plane::getFirstClassCols() {
	return firstClassCols;
}

void Plane::setFirstClassCols(int newFirstClassCols) {
	firstClassCols = newFirstClassCols;
}

int Plane::getEconRows() {
	return econRows;
}

void Plane::setEconRows(int newEconRows) {
	econRows = newEconRows;
}

int Plane::getEconCols() {
	return econCols;
}

void Plane::setEconCols(int newEconCols) {
	econCols = newEconCols;
}

void Plane::displaySeats() {
	cout << "FIRST CLASS" << "\n" << "-----------" << endl;
	cout << "firstClass status[0]: " << firstClass[0][0].status << endl;
	for(int i = 0; i < firstClassRows; i++) {
		cout << "got here" << endl;
		for(int j = 0; j < firstClassCols; j++) {
			cout << firstClass[i][j].status << " ";
		}
		cout << "\n";
	}

	cout << "ECONOMY" << "\n" << "--------" << endl;
	for(int i = 0; i < econRows; i++) {
		for(int j = 0; j < econCols; j++) {
			cout << economy[i][j].status << " ";
		}
		cout << "\n";
	}
}

Plane::~Plane() {
	delete[] firstClass;
	delete[] economy;
}