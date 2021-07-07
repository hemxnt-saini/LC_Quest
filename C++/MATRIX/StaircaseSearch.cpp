#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int row, col, key;
    cin >> row;
    cin >> col;
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> key;

    int i = 0;
    int j = row - 1;

    while (i < row && j > 0)
    {
        if (a[i][j] == key)
        {
            cout << "Found at " << i << j << endl;
            break;
        }

        if (a[i][j] < key)
        {
            i++;
        }

        if (a[i][j] > key)
        {
            j--;
        }
    }
}