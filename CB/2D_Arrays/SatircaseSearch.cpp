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

    int i = 0;
    int j = col - 1;

    int k;
    cin >> k;

    while (i < row && j > 0)
        if (a[i][j] == k)
        {
            cout << "Found At: " << i << "," << j;
        }
        else if (a[i][j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
}