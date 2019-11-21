#include <iostream>
using namespace std;

const int N = 100;

int main() {

    char name[N];
    char temp;
    int count = 0;

    cout << "Enter name: \n";

    for(;;)
    {
        cin >> temp;

        if (temp == '*') 
        {
            break;
        }

        name[count++] = temp;
    }

    cout << "Converted name: ";

    for (int i = 0; i < count; i++) 
    {
        // Small letters
        if (name[i] >= 'a' && name[i] <= 'z') 
        {
            cout << (char)(name[i] - 'a' + 'A');
        }
        else
        {
            cout << (char)(name[i] - 'A' + 'a');
        }
    }
}