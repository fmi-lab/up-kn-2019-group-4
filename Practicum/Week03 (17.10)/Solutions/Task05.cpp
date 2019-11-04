#include <iostream>
using namespace std;

int main() {

    int number;
    int rank;

    cout << "Enter number: ";
    cin >> number;

    rank = number / 4;

    if (rank < 10) {
        cout << rank + 2;
    } else {
        switch (rank)
        {
            case 10:
                cout << "Jack";
                break;
            case 11:
                cout << "Queen";
                break;
            case 12:
                cout << "King";
                break;
            case 13:
                cout << "Ace";
                break;

        }
    }

    switch (number % 4) 
    {
        case 0:
            cout << " Spades";
            break;
        case 1:
            cout << " Clubs";
            break;
        case 2:
            cout << " Diamonds";
            break;
        case 3:
            cout << " Hearts";
            break;
    }
}