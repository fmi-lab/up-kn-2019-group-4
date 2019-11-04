#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter number: ";
    cin >> number;

    if ((number / 1000 == number %10) && ((number / 10) % 10 == (number / 100 ) % 10)) {
        cout << "Number is symetric.";
    } else {
        cout << "Number is asymetric.";
    }
}