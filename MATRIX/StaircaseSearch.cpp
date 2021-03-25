#include <iostream>
#include <algorithm>
using namespace std;

void search(int arr[4][4], int size, int x)
{

    cout << "Not Found" << endl;
}

int main()
{
    int row, key;
    cin >> row;
    int a[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
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