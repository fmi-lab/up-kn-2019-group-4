#include <iostream>
using namespace std;

const int N = 100;

int main() 
{

    int array[N];
    int count = 0, temp, maxIndex;
    char input;

    for (;;)
    {
        cin >> input;
        
        if (input == '#') 
        {
            break;
        }

        array[count++] = input - '0';
    }

    // Sort
    for (int i = 0; i < count; i++) 
    {
        maxIndex = i;
        for (int j = i + 1; j < count; j++) 
        {
            if (array[j] > array[maxIndex])
            {
                maxIndex = j; 
            }
        }

        // Swap elements
        temp = array[i];
        array[i] = array[maxIndex];
        array[maxIndex] = temp;
    }

    // Print
    for (int i = 0; i < count; i++) 
    {
        cout << array[i] << " ";
    }

}