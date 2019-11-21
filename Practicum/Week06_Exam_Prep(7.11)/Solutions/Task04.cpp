#include <iostream>
using namespace std;

const int N = 100;

int main() {

    int array[N];
    int unique[N];
    int count = 0, uniqueCount = 0, temp;
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
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    // Removing non-unique
    unique[0] = array[0];
    uniqueCount = 1;

    for (int i = 1, j = 0; i < count; i++) 
    {
        if (array[i] != unique[j]) {
            unique[++j] = array[i];
            uniqueCount++;
        }
    }

    // Print
    for (int i = 0; i < uniqueCount; i++) 
    {
        cout << unique[i] << " ";
    }

}