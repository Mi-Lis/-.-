// Ch9_3_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma warning(disable : 4996)
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
int HEX_TO_DEC(char st[10])
{
    int i, s, k, p;
    s = 0;
    p = strlen(st) - 1;
    for (i = 0; st[i] != '\0'; i++)
    {
        switch (toupper(st[i]))
        {
        case 'A': k = 10; break;
        case 'B': k = 11; break;
        case 'C': k = 12; break;
        case 'D': k = 13; break;
        case 'E': k = 14; break;
        case 'F': k = 15; break;
        case '1': k = 1; break;
        case '2': k = 2; break;
        case '3': k = 3; break;
        case '4': k = 4; break;
        case '5': k = 5; break;
        case '6': k = 6; break;
        case '7': k = 7; break;
        case '8': k = 8; break;
        case '9': k = 9; break;
        case '0': k = 0; break;
        }
        s = s + k * pow(16, p);
        p--;
    }
    cout << s;
    return 0;
}

int main()
{
	double *a = 0, S = 0,p; int n; cout << "n = "; cin >> n;
	setlocale(LC_ALL, "RUS");
	const char* FName = "C:\\file.dat";      //Путь к файлу
	/*НАЧАЛО РАБОТЫ С ФАЙЛОМ*/
	ifstream in(FName, ios::binary);
	ofstream out(FName, ios::binary);
	for (int i=0; i < n; i++)
	{
		cin >> p;
		out.write((char*)&p, sizeof(n));
	}
	a = NULL;
	a = new double[n];
	for (int i = 0; i < n; i++)
	{
		in.read((char*)&a[i], sizeof(n));
        HEX_TO_DEC((char*)&a[i]);
		cout << &a[i];
		if (&a[i] > 0)
			S += a[i];
	}
	in.close();
	cin.get();
	cout << "S = " << S;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
