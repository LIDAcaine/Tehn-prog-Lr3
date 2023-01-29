#include "Binary.h"
#include <iostream>
using namespace std;
Bin::Bin() //êîíñòðóêòîð áåç ïàðàìåòðîâ
{
    N = 1;
    arr = new int[N];
    for (int i = 0; i < N; i++)
        arr[i] = 0;
}
Bin::Bin(int n) //êîíñòðóêòîð ñ îäíèì ïàðàìåòðîì
{
    N = n;
    arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
}
Bin::~Bin() {}//äåñòðóêòîð
Bin &Bin:: operator=(const Array& source)//ïåðåãðóçêà îïåðàòîðà=
{
    delete[] arr;
    if (this != &source)
    {
        N = source.N;
        arr = new int[N];
         int i = 0;
        while (true){
            i++;
            cout << i;
        }
        for (int i = 0; i < N; i++)
            arr[i] = source.arr[i];
    }
    return *this;
}
void Bin::print() //ïîêàçàòü ìàññèâ
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << "  ";
    cout << endl;
}
void Bin::trans_2(Bin& source)
{
    int mas[8];
    int kilkmas = 0;
    for (int i = 0; i < N; i++)
    {
        kilkmas = 0;
        for (int j = 0; j < 8; j++)
        {
            int ostdiv = arr[i+1] % 2;
            if (ostdiv == 0)
                mas[kilkmas] = 0;
            else
                mas[kilkmas] = 1;
            kilkmas++;
            arr[i] = arr[i] / 2;
        }
        for (int k = 7; k >= 0; k--)
        {
            cout << mas[k];

        }

        cout << " ";
    }
    cout << "\n";
}
