#include <iostream>
using namespace std;

const int N = 10;

void print(int size, int array[]) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << array[i] << " ";
    }
}

int sort (int array[]) 
{
    int temp;

    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (array[j] < array[j + 1]) 
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    print(N, array);
}

int main()
{
    int array[N] = {1, 5, 6, 2, 3, 1, 6, 7, 3, 6};

    sort(array);
}