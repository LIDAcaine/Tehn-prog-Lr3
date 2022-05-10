#pragma once
#include "Array.h"
class Oct :public Array {
public:
	Oct(); //конструктор без параметров
	Oct(int n); //конструктор с одним параметром
	virtual ~Oct(); //деструктор
	void print();
	Oct& operator=(const Array& source);
	void trans_8(Oct& source);
};
