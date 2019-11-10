#include <iostream>
using namespace std;

int main() {
        
    int count = 0;

    for (int i = 100; i < 1000; i++) 
    {
        if (i / 100 != (i / 10) % 10 &&
            i / 100 != i % 10 &&
            (i / 10) % 10 != i % 10)
        {
            cout << i << endl;
            count++;
        }
    }

    cout << "Count is: " << count;
}