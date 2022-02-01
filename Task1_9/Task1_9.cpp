/*Написать шаблон функции для поиска среднего арифметического значений массива.*/

#include <iostream>
using namespace std;
template <typename T> T srednee(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    sum /= size;
    return  sum;

}

int main()
{
    setlocale(0, "");
    const int size = 20;
    srand(time(0));
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 30;
       // cout << arr[i] << "\t";
    }
    cout << srednee(arr, size);
    return 0;
}