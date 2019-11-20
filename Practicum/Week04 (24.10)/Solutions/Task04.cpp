#include <iostream>
using namespace std;

int main() {
        
    int number;

    cout << "Enter number: ";
    cin >> number;

    for (int i = number; i > 0; i--) 
    {
        if (i % 7 == 0) {
            cout << i << endl;
        }
    }
}