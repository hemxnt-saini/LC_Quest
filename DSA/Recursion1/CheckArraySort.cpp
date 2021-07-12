#include <iostream>
using namespace std;

bool checkArraySort(int a[], int n, int s, int e)
{
    if (e == n)
    {
        return true;
    }

    if (a[s] > a[e])
    {
        return false;
    }
    checkArraySort(a, n, s + 1, e + 1);
}

int main()
{
    int a[] = {10, 24, 31, 40, 51};
    int n = sizeof(a) / sizeof(a[0]);

    if (checkArraySort(a, n, 0, 1))
    {
        cout << "YEP";
    }
    else
    {
        cout << "NOPE";
    }
}