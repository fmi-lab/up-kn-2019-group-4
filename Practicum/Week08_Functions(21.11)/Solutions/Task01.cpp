#include <iostream>
using namespace std;

const int N = 100;

void input(int size, int array[])
{
    char input, counter = 0;

    while (counter < size)
    {
        cin >> input;

        if (input >= '0' && input <= '9')
        {
            array[counter++] = input - '0';
        }
    }
}

void print(int size, int array[]) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << array[i] << " ";
    }
}

int main() 
{
    int array[N];
    int size;

    cout << "Enter size: ";
    cin >> size;

    input(size, array);
    print(size, array);
}