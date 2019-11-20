#include <iostream>
using namespace std;

int main() {

    int len = 5;
    int stored [len] = {11, 72, 13, 14, 15};
    int input [len];

    for (int i = 0; i < len; i++) 
    {
        cout << "Enter number: ";
        cin >> input [i];
    }

    for (int i = 0; i < len; i++) 
    {
        if (stored[i] != input[i]) 
        {
            cout << "Different arrays!";
            return 0;
        }
    }

    cout << "Same arrays!";
}