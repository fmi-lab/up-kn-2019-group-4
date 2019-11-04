#include <iostream>
using namespace std;

int main() {

    string codes[10] = {"-----", "....", "...-", "..--", "..---", ".----", "-...", "--..", "---..", " ----."};
    int number;

    cout << "Enter number: ";
    cin >> number;

    cout << "Code is: " << codes[number];
}