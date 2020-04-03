// Ch10_1_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include<climits>
using namespace std;
const unsigned int N = 5;
struct point
{
    int x;
    int y;
    int z;
};
double len(int x1, int y1, int z1, int x2, int y2, int z2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}
int main()
{
    point Mas[N];
    size_t S_len[N]; int Max_S = INT_MIN, Max_i = INT_MIN;
    for (size_t i = 0; i < N; i++)
    {
        cout << "Enter coord for " << i + 1 << " pointer" << endl;
        cout << "x= "; cin >> Mas[i].x;
        cout << "y= "; cin >> Mas[i].y;
        cout << "z= "; cin >> Mas[i].z;
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            S_len[i] += len(Mas[i].x, Mas[i].y, Mas[i].z, Mas[j].x, Mas[j].y, Mas[j].z);
        }
        if (Max_S < S_len[i])
        {
            Max_S = S_len[i];
            Max_i = i;
        }
    }
    cout << Mas[Max_i].x << " " << Mas[Max_i].y << " " << Mas[Max_i].z;
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
