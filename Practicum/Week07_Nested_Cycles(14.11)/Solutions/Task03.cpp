#include <iostream>
using namespace std;

const int N = 100;

bool isMagic(int side, int array[][N])
{
    int sum = 0;
    int temp = 0;

    // First row sum
    for (int i = 0; i < side; i++) 
    {
        sum += array[0][i];
    }

    // Sum for rows
    for (int i = 1; i < side; i ++) 
    {
        temp = 0;
        for (int j = 0; j < side; j++) 
        {
            temp += array[i][j];
        }

        if (temp != sum) {
            return false;
        }
    }

    // Sum for columns
    for (int i = 0; i < side; i ++) 
    {
        temp = 0;
        for (int j = 0; j < side; j++) 
        {
            temp += array[j][i];
        }

        if (temp != sum) {
            return false;
        }
    }

    return true;
}

int main()
{

    int input [N][N];
    int side;

    cout << "Enter side: ";
    cin >> side;

    for (int i = 0; i < side; i ++) 
    {
        cout << "Enter elements for row " << i + 1 << endl;

        for (int j = 0; j < side; j++) 
        {
            cin >> input[i][j];
        }
    }

    if (isMagic(side, input))
    {
        cout << "Magic";
    } 
    else 
    {
        cout << "Normal";
    }
}