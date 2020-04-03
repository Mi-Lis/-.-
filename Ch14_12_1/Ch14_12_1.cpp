// Ch14_12_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <string>
#include <ctime>
using namespace std;
class Vector3D
{
private:
    int x, y, z;
public:

    //////////////Конструкторы класса/////////////////
    Vector3D()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Vector3D(int ux, int uy, int uz)
    {
        x = ux;
        y = uy;
        z = uz;
    }
    //////////////////////////////////////////////////

    /////////////////Методы класса////////////////////
    double length()
    {
        return sqrt(x * x + y * y + z * z);
    } //Вычисление длины вектора
    void getCoord()
    {
        cout << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl;
    }//Функция получения координат вектора
    //////////////////////////////////////////////////

    ///*Перегрузка операций для работы с векторами*///
    /*Равенство векторов*/
    bool operator== (const Vector3D& V1)
    {
        if (x == V1.x && y == V1.y && z == V1.z)
            return true;
        return false;
    } //Равенство векторов
    /*Сложение векторов*/
    Vector3D operator+ (const Vector3D& V1)
    {
        Vector3D temp;
        temp.x = x + V1.x;
        temp.y = y + V1.y;
        temp.z = z + V1.z;
        return temp;
    } //Сложение векторов
    /*Вычитание векторов*/
    Vector3D operator- (const Vector3D& V1)
    {
        Vector3D temp;
        temp.x = x - V1.x;
        temp.y = y - V1.y;
        temp.z = z - V1.z;
        return temp;
    }
    /*Умножение вектора на скаляр*/
    Vector3D operator* (int a)
    {
        Vector3D temp;
        temp.x = x * a;
        temp.y = y * a;
        temp.z = z * a;
        return temp;
    }
    /*Скалярное произведение векторов*/
    int operator*(const Vector3D& V1)
    {
        return x * V1.x + y * V1.y + z * V1.z;
    }
    /*Векторное произведение векторов*/
    Vector3D operator% (const Vector3D& V1)
    {
        Vector3D temp;
        temp.x = y * V1.z - z * V1.y;
        temp.y = z * V1.x - x * V1.z;
        temp.z = z * V1.y - y * V1.z;
        return temp;
    }
    ///////////////////////////////////////////////////
    void operator*= (int a)
    {
        x = x * a;
        y = y * a;
        z = z * a;
    }
    void operator*=(const Vector3D& V1)
    {
        x = y * V1.z - z * V1.y;
        y = z * V1.x - x * V1.z;
        z = z * V1.y - y * V1.z;
    }
    void operator+=(const Vector3D& V1)
    {
        x = x + V1.x;
        y = y + V1.y;
        z = z + V1.z;
    }
    void operator-=(const Vector3D& V1)
    {
        x = x - V1.x;
        y = y - V1.y;
        z = z - V1.z;
    }
    //////////////////////////////////////////////////
};
int main()
{
    setlocale(0,"RUS");
    int S;
    Vector3D V1(0, 5, 0);
    Vector3D V2(20, 7, 13);
    cout << "Вектор V1 =" << endl;
    V1.getCoord();
    cout << endl;
    cout << "Вектор V2 =" << endl;
    V1.getCoord();
    cout << endl;
    Vector3D V0;
    V0 = V1 + V2;
    cout << "Сложение векторов V1 и V2" << endl;
    V0.getCoord();
    cout << endl;
    V0 = V1 - V2;
    cout << "Вычитание векторов V1 и V2" << endl;
    V0.getCoord();
    cout << endl;
    V0 = V1 * 2;
    cout << "Векторное произведение векторов V1 и V2" << endl;
    V0.getCoord();
    cout << endl;
    S = V1 * V2;
    cout << "Скалярное произведение векторов = " << S << endl;
    V0 = V1 % V2;
    V0.getCoord();
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
