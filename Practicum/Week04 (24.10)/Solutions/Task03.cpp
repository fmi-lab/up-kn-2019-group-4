#include <iostream>
using namespace std;

int main() {
        
    int number, sum = 0;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 100; i < 1000; i++) 
    {
        sum = (i / 100) + ((i / 10) % 10) + (i % 10);

        if (sum == number)
        {
            cout << i << endl;
        }
    }
}