#include <iostream>

using namespace std;

int main() 
{
    int num1, num2, num3;
    int min, max;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter number 3: ";
    cin >> num3;

    min = num1;
    max = num1;

    if (num2 < min) 
    {
        min = num2;
    }
    else if (num2 > max)
    {
        max = num2;
    }

    if (num3 < min) 
    {
        min = num3;
    } 
    else if (num3 > max)
    {
        max = num3;
    }

    cout << "Min is: " << min << endl;
    cout << "Max is: " << max << endl;
}