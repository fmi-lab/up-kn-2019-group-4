#include <iostream>
using namespace std;

int main() {
        
    int number, sum = 0;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 10; i <= number; i++) 
    {
        sum += (i / 10) + (i % 10);
    }

    cout << "Sum is: " << sum;
}