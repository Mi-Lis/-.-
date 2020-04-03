
#include <iostream>
#include <fstream>
using namespace std;
struct students
{
	string Name;
	string Familia;
	string Otchestvo;
	size_t Birthday;
	size_t Marks;
	students();
	students(string n, string f, string o, string b, string m);
};
students::students(string n, string f, string o, string b, string m)
{
	Name = n;
	Familia = f;
	Otchestvo = o;
	Birthday = atoi(b.c_str());
	Marks = atoi(m.c_str());
}
students::students()
{}
int main()
{

	size_t group;
	string str,n,f,o,b,m;
	ifstream in("in.txt");
	ofstream out("out.txt");
	in >> str;
	in >> str;
	group = atoi(str.c_str());
	students* student = new students[group+1];
	while (in.peek() != EOF)
	{
		for (size_t i = 0; i < group; i++)
		{
				in >> n >> f >> o >> b >> m;
				student[i].Name = n;
				student[i].Familia = f;
				student[i].Otchestvo = o;
				student[i].Birthday = atoi(b.c_str());
				student[i].Marks = atoi(m.c_str());
		}
	}
	for (size_t i = 1; i < group; i++)
		for (size_t j = i; j > 0 && student[j-1].Name[0] > student[j].Name[0]; j--)
			swap(student[j], student[j-1]);
	for (size_t i = 0; i < group; i++)
	{
		cout<<student[i].Name<<endl;
	}
	for (size_t i = 1; i < group; i++)
		for (size_t j = i; j > 0 && student[j - 1].Birthday%100 > student[j].Birthday%100; j--)
			swap(student[j], student[j - 1]);
	for (size_t i = 0; i < group; i++)
	{
		cout << student[i].Name << endl;
	}
}