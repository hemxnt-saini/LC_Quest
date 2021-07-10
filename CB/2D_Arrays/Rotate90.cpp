#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        int s = 0;
        int e = row - 1;

        while (s < e)
        {
            swap(a[i][s], a[i][e]);
            s++;
            e--;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}