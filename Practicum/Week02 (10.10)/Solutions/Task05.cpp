#include <iostream>

using namespace std;

int main()
{
    char op;
    int x, y;
    
    cout << "Въведете операция и числата х и у" << endl;
    cin >> op >> x >> y;
    
    if (op == '+'){
        cout << x + y;
    } else if (op == '-') {
        cout << x - y;
    } else if (op == '/') {
        cout << x / y;
    } else if (op == '%') {
        cout << x % y;
    } else {
        cout << "Грешна операция";
    }
    
    return 0;
}
