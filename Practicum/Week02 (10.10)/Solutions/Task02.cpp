#include <iostream>

using namespace std;

int main() 
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    cout << "Days: " << age * 365 << endl;
    cout << "Hours: " << age * 365 * 24 << endl;
    cout << "Minutes: " << age * 365 * 24 * 60 << endl;
    cout << "Seconds: " << age * 365 * 24 * 60 * 60 << endl;
}