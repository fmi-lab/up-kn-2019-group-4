#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int p;
    bool result;

    cout << "Enter a number: ";
    cin >> p;

    result = (p % 4 == 0) || (p %7 == 0);

    cout << "Result: " << result << endl;

    // Subtask 2
    cout << "Enter a number (2): ";
    cin >> p;

    result = p % 10 == 7 ||
             (p / 10) % 10 == 7 ||
             (p / 100) % 10 == 7;

    cout << "Result: " << result << endl;

    // Subtask 3
    cout << "Enter a number (3): ";
    cin >> p;

    int digit1, digit2, digit3;

    digit1 = p % 10;
    digit2 = (p / 10) % 10;
    digit3 = (p / 100) % 10;

    result = digit1 != digit2 &&
             digit2 != digit3 &&
             digit3 != digit1;

    cout << "Result: " << result << endl;

    // Subtask 4
    cout << "Enter a number (4): ";
    cin >> p;

    digit1 = p % 10;
    digit2 = (p / 10) % 10;
    digit3 = (p / 100) % 10;

    result = digit1 == digit2 ||
             digit2 == digit3 ||
             digit3 == digit1;

    cout << "Result: " << result << endl;
}