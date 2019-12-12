#include <iostream>
using namespace std;

const int SIZE = 15;

void combine(int array1[], int array2[], int size, bool sum, int result[])
{
    for (int i = 0; i < size; i++)
    {
        if (sum)
        {
            result[i] = array1[i] + array2[i];
        }
        else
        {
            result[i] = array1[i] - array2[i];
        }
    }
}

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array1[SIZE] = {11, 17, 4, 10, 29, 4, 18, 18, 22, 14, 5, 5, 1, 27, 1};
    int array2[SIZE] = {11, 25, 2, 27, 6, 21, 24, 2, 3, 22, 22, 21, 26, 8, 5};
    int result[SIZE];
    bool sum;

    cout << "Enter 1 for sum and 0 for division: ";
    cin >> sum;

    combine(array1, array2, SIZE, sum, result);
    print(result, SIZE);
}