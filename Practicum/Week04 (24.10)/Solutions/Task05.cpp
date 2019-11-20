#include <iostream>
using namespace std;

int main() {
        
    int count = 0;

    for (int i = 100; i < 1000; i++) 
    {
        if (((i / 100) * (i / 100)) == i % 100)
        {
            cout << i << endl;
        }
    }

}