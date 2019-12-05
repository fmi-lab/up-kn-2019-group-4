#include <iostream>
using namespace std;

void swap(int* num1, int* num2) {
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() 
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    swap(&num1, &num2);

    cout << "First number is: " << num1 << endl;
    cout << "Second number is: " << num2;
}