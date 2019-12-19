#include <iostream>
using namespace std;

int findElement(int n)
{
    int element;

    if (n == 1)
    {
        cout << 1 << " ";
        
        return 1;
    }
    else
    {
        element = 5 * (2 * n - 1) * n - findElement(n - 1);
        
        cout << element << " ";
        
        return element;
    }
}

int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    findElement(number);
}
