
#include <iostream>
#include <iomanip> 
using namespace std;

template <typename T> T comma(T a, int c) //comma - �������
{
    for (int i = 0; i < c; i++)
        a *= 10;
    int temp = (int)a;
    if (a - temp >= 0.5)
        temp++;
    a = temp;
    for (int i = 0; i < c; i++)
        a /= 10;
    return a;
}
int main()
{
    setprecision(16);
    srand(time(0));
    double b = 1.111111111111, c = 2.999999999999;
    double a = (double)rand() / (double)RAND_MAX * (c - b) + b;
    cout << setprecision(16) << a << endl;
    int d = rand() % 10 + 1;
    cout << d << endl;
    cout << comma(a, d);
    return 0;
}

/*�������� �������, ������� ��������� � �������� ���������� ������������ ����� � ���������� ������
����� ���������� �����, ������� ������ ��������.
������� ������� �������� ���������� ��������������
������������� ����� � �������� ���������*/