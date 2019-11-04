#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Ваведете страните на триъгълника" << endl;
    
    cin >> x;
    cin >> y;
    cin >> z;
    
    if(x + y <= z || x + z <= y || y + z <= x) {
        cout << "Няма такъв триъгълник" << endl;
        return 0;
    }
    
    //искаме х да е най-голямата страна, за да не пише еднакъв код няколко пъти
    if(z > x) {
         int temp = x;
         x = z;
         z = temp;
    } else if(y > x) {
         int temp = x;
         x = y;
         y = temp;
    }
    
    if((x == y) && (y == z)) {
        cout << "Триъгълникът е равностранен" << endl;
    } else if((x == y) || (y == z) || (z == x)) {
        cout << "Триъгълникът е равнобедрен" << endl;
    } else {
        cout << "Триъгълникът е разностранен" << endl;
    }
    
    // за тези формули трябва да знаем коя е най-голямата страна и затова я слагаме да е х по-горе
    if(x * x == (y * y + z * z)) {
        cout << "Триъгълникът е правоъгълен" << endl;
    } else if(x * x > y * y + z * z) {
        cout << "Триъгълникът е тъпоъгълен" << endl;
    } else {
        cout << "Триъгълникът е остроъгълен" << endl;
    }
    
   
    return 0;
}
