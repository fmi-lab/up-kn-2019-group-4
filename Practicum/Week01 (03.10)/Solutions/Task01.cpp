#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter number: ";
    cin >> number;

    if ((number > 9 && number < 100) || (number < -9 && number > -100)) {
        cout << "Number has 2 digits.";
    } else {
        cout << "Number has more or less than 2 digits.";
    }
}