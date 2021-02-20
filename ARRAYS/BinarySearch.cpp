#include <iostream>
using namespace std;

bool binary_search(int a[], int n, int k)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == k)
        {
            return true;
        }
        else if (a[mid] > k)
        {
            s = a[mid];
        }
        else
        {
            e = a[mid];
        }
    }
    return false;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (binary_search(arr, n, 4))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}