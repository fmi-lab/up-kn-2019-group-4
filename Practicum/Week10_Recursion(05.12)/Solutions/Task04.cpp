#include <iostream>
using namespace std;

void print(char letter)
{
    int count = letter - 'A';

    if (count < 0)
    {
        return;
    }

    for (int i = 0; i <= count; i++)
    {
        cout << (char)('A' + i) << " ";
    }
    cout << endl;

    print(--letter);
}

int main()
{
    char letter;

    cout << "Enter capital letter: ";
    cin >> letter;

    print(letter);
}
