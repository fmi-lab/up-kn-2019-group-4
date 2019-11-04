#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int side, height;

    cout << "Enter side length: ";
    cin >> side;

    cout << "Enter height length: ";
    cin >> height;

    cout << "Result: " << side * height / 2 << endl;

    // By 3 sides
    int side1, side2, side3;
    double halfPerimeter;

    cout << "Enter side 1 length: ";
    cin >> side1;

    cout << "Enter side 2 length: ";
    cin >> side2;

    cout << "Enter side 3 length: ";
    cin >> side3;

    halfPerimeter = (side1 + side2 + side3) / 2;

    cout << "Result: " << sqrt(halfPerimeter * (halfPerimeter - side1) * (halfPerimeter - side2) * (halfPerimeter - side3));
}
