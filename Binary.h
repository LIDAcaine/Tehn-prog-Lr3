#pragma once
#include "Array.h"
class Bin :public Array {
public:
	Bin(); //конструктор без параметров
	Bin(int n); //конструктор с одним параметром
	virtual ~Bin(); //деструктор
	void print();
	Bin& operator=(const Array& source);
	void trans_2(Bin& source);
};