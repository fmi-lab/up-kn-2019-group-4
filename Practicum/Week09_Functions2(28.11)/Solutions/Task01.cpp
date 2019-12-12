#include <iostream>
#include <string.h>
using namespace std;

const int MAX_SIZE = 100;

void print(char string[], int begin) {
    int size = strlen(string);

    for (int i = begin; i < size; i++) {
        cout << string[i];
    }
}

int findSymbol(char string[], char symbol) {
    int size = strlen(string);

    for (int i = 0; i < size; i++) {
        if (string[i] == symbol) {
            return i;
        } 
    }

    return -1;
}

int main() 
{
    char input[MAX_SIZE], symbol;
    int position;

    cout << "Enter string: ";
    cin.getline(input, MAX_SIZE);
    cout << "Enter symbol: ";
    cin >> symbol;

    position = findSymbol(input, symbol);

    if (position >= 0) {
        cout << "Position: " << position + 1 << endl;
        print(input, position);
    } else {
        cout << "Symbol is not found";
    }
    
}