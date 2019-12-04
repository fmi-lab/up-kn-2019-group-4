#include <iostream>
using namespace std;

const int N = 10;
const int M = 10;

int main() {

    int array[N][M];
    int n, m;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;

    int i = n - 1;
    int j = 0;
    int number = 0;
    
    while (j <= m - 1) 
    {
        int ii = i;
        int jj = j;

        while (ii <= n - 1 && jj <= m - 1) 
        {
            array[ii][jj] = ++number;
            ii++;
            jj++;
        }

        //change i
        if(i != 0) 
        {
            i--;
        }        
        else //change j
        {
            j++;
        }
    }
    
    for (int k = 0; k < n; k++) 
    {
        for (int l = 0; l < m; l++) 
        {
            cout << array[k][l] << " ";
            if (array[k][l] < 10)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}