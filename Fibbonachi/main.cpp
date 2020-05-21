#include <iostream>

using namespace std;

size_t Fibbonachi(size_t num)
{
    if(num==0)
        return 0;
    if(num == 1)
        return 1;
    return Fibbonachi(num-1)+Fibbonachi(num-2);
}
void Fib(size_t num)
{
    for(size_t i = 0; i<num; i++)
    {
        cout<<Fibbonachi(i)<<" ";
    }
}
int main()
{
    Fib(10);
    return 0;
}
