#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    
    if(x % y == 0) {
        cout << "x се дели на y";
    } else if(y % x == 0) {
        cout << "у се дели на х";
    } else {
        cout << "Нито едно от двете не се дели на другото!";
    }    

    return 0;
}
