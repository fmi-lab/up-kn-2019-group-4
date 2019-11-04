#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "Point is in the center.";
    } else if (x == 0 && y != 0) {
        cout << "Point is on x.";
    } else if (x != 0 && y == 0) {
        cout << "Point is on y.";
    } else {
        if (x > 0 && y > 0) {
            cout << "Point is in 1st.";
        } else if (x > 0 && y < 0) {
            cout << "Point is in 2nd.";
        } else if (x < 0 && y < 0) {
            cout << "Point is in 3rd.";
        } else if (x < 0 && y > 0) {
            cout << "Point is in 4th.";
        }
    }
}