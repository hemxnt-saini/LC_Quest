#include <iostream>
using namespace std;

bool checkSorted(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (a[0] < a[1] && checkSorted(a + 1, n - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int a[] = {1, 2, 3, 6, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    if (checkSorted(a, n))
    {
        cout << "Yes Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
}