#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, cx, cy, r;
    
    cout << "Въведете координатите на точката(х, у), на центъра на окръжността (сх, су) и радиусът r" << endl;
    cin >> x >> y >> cx >> cy >> r;
    
    if(sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy)) < r) {
        cout << "Лежи във вътрешността";
    } else {
        cout << "Не лежи във вътрешността"; 
    }
    
    return 0;
}
