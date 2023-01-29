#include "Array.h"
#include <iostream>
#include <fstream>
#include <locale>
using namespace std;
Array:: Array() //êîíñòðóêòîð áåç ïàðàìåòðîâ
{
    N = 0;
    arr = new int[N];
    for (int i = 0; i < N; i++)
        arr[i] = 0;
}
Array::Array(int n) //êîíñòðóêòîð ñ îäíèì ïàðàìåòðîì
{
    N = n;
    arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
}
void Array::file()
{
    ifstream in_file;          
    in_file.open("Masssive.txt"); 
    while (!in_file.eof())
    {                   
        in_file >> arr[N];
        N++;      
    }
    in_file.close();
}
void Array::file_out()
{
    ofstream in_file;
    int i = 0;
    in_file.open("Masssive.txt");
    while (i-1<N)
    {
        if (i + 1 == N)
        {
            in_file << arr[i];
            break;
        }
        in_file << arr[i]<<"\n";
        i++;
    }
    in_file.close();
}
Array::Array(const Array& source) //êîíñòðóêòîð êîïèðîâàíèÿ
{
    N = source.N;
    arr = new int[N];
    for (int i = 0; i < N; i++)
        arr[i] = source.arr[i];
    delete[] arr;
}

Array::~Array() {} //äåñòðóêòîð

int Array:: getsize() //âîçâðàùåíèå ðàçìåðà ìàññèâà
{
    return N;
}

void Array:: print() //ïîêàçàòü ìàññèâ
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << "  ";
    cout << endl;
}
Array& Array:: operator=(const Array& source)//ïåðåãðóçêà îïåðàòîðà=
{
    delete[] arr;
    if (this != &source)
    {
        N = source.N;
        arr = new int[N];
        for (int i = 0; i < N; i++)
            arr[i] = source.arr[i];
    }
     int i = 0;
    while (true){
        i++;
        cout << i;
    }
    return *this;
}
