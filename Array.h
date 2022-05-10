#pragma once
#include <iostream>
class Array
{
public:
    int* arr;
    int N;
    Array(); //конструктор без параметров
    Array(int n); //конструктор с одним параметром
    Array(const Array& source); //конструктор копирования
    ~Array(); //деструктор
    int getsize(); //возвращение размера массива
    void print(); //показать массив
    void file();
    void file_out();
    Array& operator=(const Array& source);
};