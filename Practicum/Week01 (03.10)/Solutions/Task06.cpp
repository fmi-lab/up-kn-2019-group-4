#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, D;
    double sqrtD;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";

    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (a == 0) {
        cout << "x = " << (double) -c / b;
    } else {
        D = (b * b) - (4 * a * c);

        if (D == 0) {
            cout << "x = " << (double) -b / (2 * a);
        } else if (D > 0) {
            sqrtD = sqrt(D);

            cout << "x1 = " << (-b + sqrtD) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrtD) / (2 * a);
        } else {
            cout << "No solution";
        }
    }
}