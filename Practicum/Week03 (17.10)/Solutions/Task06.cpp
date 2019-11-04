#include <iostream>
using namespace std;

int main() {

    double score;

    cout << "Enter score: ";
    cin >> score;

    switch ((int) score) 
    {
        case 2:
            cout << "Weak";
            break;
        case 3:
            if (score + 0.5 >= 4)
            {
                cout << "Good";
            } else {
                cout << "Middle";
            }
            break;
        case 4:
            if (score + 0.5 >= 5)
            {
                cout << "Very good";
            } else {
                cout << "Good";
            }
            break;   

        case 5:
            if (score + 0.5 >= 6)
            {
                cout << "Excellent";
            } else {
                cout << "Very good";
            }
            break;
        case 6:
            cout << "Excellent";
            break;
    }
}