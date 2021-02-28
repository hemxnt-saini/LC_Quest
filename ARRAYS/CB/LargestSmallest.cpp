#include <iostream>
using namespace std;

int smallest(int a[], int n)
{
    int s = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < s)
        {
            s = a[i];
        }
    }
    return s;
}
int largest(int a[], int n)
{
    int s = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > s)
        {
            s = a[i];
        }
    }
    return s;
}

int main()
{
    int a[] = {34, 23, 56, 78, 12, 35};
    int n = sizeof(a) / sizeof(a[0]);

    int sm = smallest(a, n);
    int la = largest(a, n);

    cout << "Largest: " << la << "Smallest:" << sm << endl;
}