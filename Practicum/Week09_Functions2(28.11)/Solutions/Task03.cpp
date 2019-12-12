#include <iostream>
using namespace std;

const int SIZE = 10;

bool isSimple(int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

void getSimpleNumbers(int original[], int simple[], int *size)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (isSimple(original[i]))
        {
            simple[(*size)++] = original[i];
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
    int array[SIZE] = {24, 33, 5, 21, 55, 71, 3, 7, 23, 56};
    int result[SIZE], size = 0;

    getSimpleNumbers(array, result, &size);
    print(result, size);
}