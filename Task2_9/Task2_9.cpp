/*2. Написать перегруженные шаблоны функций для нахождения корней линейного (a*x + b = 0) и квадратного
(a*x2+b*x + c = 0) уравнений. Замечание: в функции
передаются коэффициенты уравнений.*/

#include <iostream>
using namespace std;

template <typename T> T line(T a, T b)
{
    return -b / a;
}

template <typename T1, typename T2> T1 line(T1 a, T2 b)
{
    return -b / a;
}

template <typename T> void line(T a, T b, T c)
{
    T D = (b * b) - 4 * a * c;
    if (D < 0)
    {
        cout << "Решений нет.";
    }
    else if (D == 0)
    {
       cout << -b / (2 * a);
    }

    else
    {
        cout << (-b - sqrt(D)) / (2 * a) << endl;
        cout << (-b + sqrt(D)) / (2 * a) << endl;
    }
}

int main()
{
    setlocale(0, "");
    cout << line(5, 10) << endl;
    cout << line(5.5, 10.3) << endl;
    cout << line(5, 10.5) << endl;
    cout << line(5.5, 10);
    cout << endl;
    line(10, 10, 10);
    return 0;
}