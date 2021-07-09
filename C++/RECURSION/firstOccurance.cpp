#include <iostream>
using namespace std;

//Last Occ and All Occ EASY!

int firstOccurance(int a[], int n, int i, int k)
{

    if (i == n)
    {
        return -1;
    }

    if (a[i] == k)
    {
        return i;
    }

    return firstOccurance(a, n, i + 1, k);
}

int main()
{
    int a[] = {1, 2, 3, 7, 4, 5, 6, 7, 10};
    int n = sizeof(a) / sizeof(a[0]);

    int k;
    cin >> k;

    cout << firstOccurance(a, n, 0, k);
}