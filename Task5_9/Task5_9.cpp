/*Реализуйте перегруженные функции для
■ Нахождения максимального значения двух целых;
■ Нахождения максимального значения трёх целых.*/

#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a >= b)
        return a;
    return b;
}
int max(int a, int b, int c)
{
    if (max(a, b) > c) 
        return max (a,b);
    return c;
}
int max(int a, int b, int c, int d)
{
    if (max(a, b, c) > d)
        return max(a, b, c);
    return d;
}
void print(int a, int b, int c, int d)
{
    cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
}

int main()
{
    setlocale(0, "");
    srand(time(0));
    int a = rand() % 20, b = rand() % 20, c = rand() % 20, d = rand() % 20;
    print(a, b, c, d);
    cout << max(a, b) << endl;
    a = rand() % 20, b = rand() % 20, c = rand() % 20, d = rand() % 20;
    print(a, b, c, d);
    cout << max(a, b, c) << endl;
    a = rand() % 20, b = rand() % 20, c = rand() % 20, d = rand() % 20;
    print(a, b, c, d);
    cout << max(a, b, c, d) << endl;
    return 0;
}