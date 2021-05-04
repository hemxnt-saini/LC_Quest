#include <iostream>
using namespace std;

int merge(int a[], int b[], int n1, int n2)
{

    int i = 0;
    int j = 0;
    int c[n1 + n2];

    int k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (j < n2)
    {
        c[k++] = b[j++];
    }
    while (i < n1)
    {
        c[k++] = a[i++];
    }

    if ((n1 + n2) % 2 != 0)
    {
        return c[(n1 + n2) / 2];
    }
    else
    {
        int a = c[(n1 + n2) / 2];
        int b = c[((n1 + n2) / 2) - 1];

        return (a + b) / 2;
    }
}

int main()
{
    int a[] = {1, 3, 5};
    int b[] = {2, 7, 9};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    cout << merge(a, b, n1, n2);
}
