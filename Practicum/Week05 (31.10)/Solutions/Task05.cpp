#include <iostream>
using namespace std;

int main() {

    int len = 7;
    int input [len] = {7, 8, 9, 4, 9, 8, 7};
    int sum = 0;
    bool symetrical = true;

    for (int i = 0; i < len / 2; i++) 
    {
        if (input[i] != input[len - i - 1]) 
        {
            symetrical = false;
            break;
        }
    }

    if (symetrical) 
    {
        cout << "Symetrical ";
    } 
    else 
    {
        cout << "Not symetrical ";
    }

}