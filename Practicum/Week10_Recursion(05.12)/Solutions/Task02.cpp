#include <iostream>
using namespace std;

int pow(int number, int power)
{
    if (power == 1)
    {
        return number;
    }

    return number * pow(number, --power);
}

int main()
{
    int number, power;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter power: ";
    cin >> power;

    cout << "Result is: " << pow(number, power);
}
