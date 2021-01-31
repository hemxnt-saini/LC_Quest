#include <bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int size)
{
    int i;
    cout << "The repeating elements are:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[abs(arr[i])] << "first" << endl;

        if (arr[abs(arr[i])] >= 0)
        {
            cout << arr[abs(arr[i])] << "Second" << endl;
            arr[abs(arr[i])] = -arr[abs(arr[i])];
            cout << arr[abs(arr[i])] << "Third" << endl;
        }
        else
            cout << abs(arr[i]) << "Answer" << endl;
    }
}

int main()
{
    int arr[] = {2, 3, 1, 3, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, arr_size);
    return 0;
}
