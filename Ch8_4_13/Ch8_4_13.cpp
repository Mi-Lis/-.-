﻿// Ch8_4_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<iomanip>
#include <math.h>
using namespace std;
float F(float x)                         //Функция невозвращающая значения
{

    if (abs(x) == 1)                    //Проверка значений по условию
        return 1;
    if (x >= 0 && x != 1)
        return -1 / (1 - x);
    if (x < 0 && x != 1)
        return 1 / (1 + x);

}
void F(float x, float& y)              //Функция возвращающая значения
{

    if (x < 0 && x != -1)               //Проверка значений по условию
        cout << "y = " << 1 / (1 + x);
    if (abs(x) == 1)
        cout << "y = " << 1;
    if (x >= 0 && x != 1)
        cout << "y = " << -1 / (1 - x);
}
int main()
{
    setlocale(LC_ALL, "RUS");
    float y;
    float a, b; float h; cout << "Введите отрезок"; cin >> a >> b;
    cout << "Введите шаг"; cin >> h;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    for (float x = a; x <= b; x += h, cout<<endl) //Прогоняем x по нашему диапозону
    {
        cout <<"y = "<< F(x);
    }
    cout << endl;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////



    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    for (float x = a; x <= b; x += h, cout << endl) //Прогоняем x по нашему диапозону
    {
        F(x, y);
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
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
