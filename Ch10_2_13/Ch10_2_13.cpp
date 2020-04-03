#include <iostream>
#include <fstream>
using namespace std;
struct Toys
{
	string Name;
	size_t Cost;
	size_t AgeMin, AgeMax;
}; //Определяем структуру Toys
int main()
{
	size_t group, M,N;
	string str, n, f, o, b;
	ifstream in("in.txt");
	ofstream out("out.txt");
	cin >> M >> N; //Вводти переменные отвечающее за возрастные границы
	in >> str;
	group = atoi(str.c_str());
	Toys* Toy = new Toys[group + 1];//Создаем массив из group игрушек
	while (in.peek() != EOF)
	{
		for (size_t i = 0; i < group; i++)//Заполняем данные о каждой игрушке
		{
			in >> n >> f >> o >> b;
			Toy[i].Name = n;
			Toy[i].Cost = atoi(f.c_str());
			Toy[i].AgeMin = atoi(o.c_str());
			Toy[i].AgeMax = atoi(b.c_str());
		}
	}
	for (size_t i = 0; i < group; i++)
	{
		if (Toy[i].AgeMax >= N && Toy[i].AgeMin <= M) //Проверяем на принадлежность данному возрастному диапозону
		{
			out << Toy[i].Name<<endl;
		}
	}
}