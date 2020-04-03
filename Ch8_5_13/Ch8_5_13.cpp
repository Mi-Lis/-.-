// Ch8_5_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
template<typename T>
T Sum(T** a, size_t n, size_t m)
{
    T S = 0;
    for (size_t i = 0; i < n- 1; i++) //Перебор индексов находящиеся над побочной диагональю
    {
        for (size_t j = 0; j < m - i - 1; j++)
        {
            S += a[i][j];
        }
    }
    return S;
};
//Функции взятые из предыдущей главы о массивах
template<typename T>T** creat(T** mas, size_t n, size_t m)
{
    mas = new int* [2 * n];
    for (size_t i = 0; i < n; ++i)
        mas[i] = new int[m];
    for (size_t i = 0; i < n; ++i)
        for (size_t j = 0; j < m; ++j)
        {
            cout << "mas[" << i << "][" << j << "]:= ";
            cin >> mas[i][j];
        }
    return mas;
}
template<typename T>void print(T** mas, size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++, cout << endl)
        for (size_t j = 0; j < n; j++)
            cout << mas[i][j] << "\t";
}
template<typename T>void deleteMas(T** mas, size_t n)
{
    for (size_t i = 0; i < n; i++)
        delete[] mas[i];
    delete[] mas;
}
int main()
{
    int n, m;
    int** a = NULL;
    cout << "n= ";
    cin >> n;
    cout << "m= ";
    cin >> m;
    a = creat(a,n, m);
    cout << Sum(a, n, m);
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
