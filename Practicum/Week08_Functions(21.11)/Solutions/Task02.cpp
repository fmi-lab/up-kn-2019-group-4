#include <iostream>
using namespace std;

const int N = 10;

int count (int number, int array[]) 
{
    int count = 0;

    for (int i = 0; i < N; i++) 
    {
        if (number == array[i]) 
        {
            count++;
        }
    }

    return count;
}

int main() 
{
    int array[N] = {1, 5, 6, 2, 3, 1, 6, 7, 3, 6};
    int number;

    cout << "Enter number to look for: ";
    cin >> number;

    cout << "Count is: " << count(number, array);
}