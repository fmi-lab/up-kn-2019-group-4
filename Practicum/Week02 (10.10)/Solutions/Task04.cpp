#include <iostream>

using namespace std;

int main()
{
    int x, y, z, w;
    cout << "Въведете трицифрено число:";
    cin >> x;
    
    if((x > 99 && x < 1000) || (x < -99 && x >-1000)){
        y = x % 10; // взимаме последната цифра
        x /= 10;
        z = x % 10; // взимаме средната цифра тоест 2 в 123
        x /=10;
        w = x % 10; // взимаме първата цифра
                
        if((w < z) && (z < y)) {
            cout << "TRUE";
        } else {
            cout << "FALSE";
        }
    
    }
   
    return 0;
}
