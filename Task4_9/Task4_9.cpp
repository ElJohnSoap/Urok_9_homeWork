/*4. Написать шаблонные функции и протестировать их
в основной программе:
■ Нахождения максимального значения в одномерном
массиве;
■ Нахождения максимального значения в двумерном
массиве;
■ Нахождения максимального значения в трёхмерном
массиве.*/

template <typename T> T max(T arr[], const int size)
{
    T max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;

}

template <typename T> T max(T arr[][4], const int size1)
{
    T max = arr[0][0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < 4; j++)
            if (arr[i][j] > max)
                max = arr[i][j];
        
    }
    return max;
}

template <typename T> T max(T arr[][4][4], const int size1)
{
    T max = arr[0][0][0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (arr[i][j][k] > max)
                    max = arr[i][j][k];
            }
        }
    }
    return max;
}

#include <iostream>
using namespace std;
int main()
{
    const int size1 = 3, size2 = 4, size3 = 4;
    int arr1[size1], arr2[size1][size2], arr3[size1][size2][size3];
    srand(time(0));
    
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = rand() % 20;
        for (int j = 0; j < size2; j++)
        {
            arr2[i][j] = rand() % 20;
            for (int k = 0; k < size3; k++)
            {
                arr3[i][j][k] = rand() % 20;
            }
        }
    }

    cout << max(arr1, size1) << endl;
    cout << max(arr2, size1) << endl;
    cout << max(arr3, size1) << endl;
    
    return 0;

}