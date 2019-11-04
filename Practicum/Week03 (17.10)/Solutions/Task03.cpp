#include <iostream>
using namespace std;

int main() {

    string weekdays[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    int number;

    cout << "Enter number: ";
    cin >> number;

    cout << "Days is: " << weekdays[number] << endl;
    if (number > 4) 
    {
        cout << "Days is holiday.";
    } 
    else 
    {
        cout << "Days is working.";
    }
}