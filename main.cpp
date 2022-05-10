#include <iostream>
#include <fstream>
#include "Array.h"
#include "Binary.h"
#include "Octal.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int c=1, h, k;
	int flag = 1;
	Bin b;
	Oct d;
	while (c != 0)
	{
		h = 1;
		k = 1;
		cout << "Перевод чисел массива в различные системы счисления:\n1 - Заполнить массив вручную\n2 - Взять значения из файла\n0 - Завершить работу\nВы выбрали: ";
		cin >> c;
		system("cls");
		if (c == 1)
		{
			cout << "Введите размер массива: ";
			cin >> n;
			Array array(n);
			system("cls");
			b = array;
			d = array;
			while (h != 0)
			{
				cout << "1 - Перевести в двоичную систему\n2 - Перевести в восьмеричную систему\n3 - Внести новые значения в файл\n0 - Вернуться в меню\nВы выбрали: ";
				cin >> h;
				switch (h)
				{
				case 1:
					system("cls");
					cout << "Исходный массив: ";
					array.print();
					cout << "Двоичная система: ";
					b.trans_2(b);
					break;
				case 2:
					system("cls");
					cout << "Исходный массив: ";
					array.print();
					cout << "Восьмеричная система: ";
					d.trans_8(d);
					break;
				case 3:
					system("cls");
					cout << "Значения записаны в файл\n";
					array.file_out();
					break;
				case 0:
					flag = 0;
					break;
				}
			}
			system("cls");
		}
		if (c == 2)
		{
			Array A(0);
			A.file();
			cout << "Данные из файла взяты" << endl;
			A.print();
			b = A;
			d = A;
			while (k != 0)
			{
				cout << "1 - Перевести в двоичную систему\n2 - Перевести в восьмеричную систему\n0 - Вернуться в меню\nВы выбрали: ";
				cin >> k;
				switch (k)
				{
				case 1:
					system("cls");
					cout << "Исходный массив: ";
					A.print();
					cout << "Двоичная система: ";
					b.trans_2(b);
					break;
				case 2:
					system("cls");
					cout << "Исходный массив: ";
					A.print();
					cout << "Восьмеричная система: ";
					d.trans_8(d);
					break;
				case 0:
					k = 0;
					break;
				}

			}
			system("cls");
		}
		if (c == 0)
		{
			system("cls");
			cout << "Завершение работы" << endl;
			return 0;
		}
		
	}
}
