#include <iostream>
using namespace std;

int partition(int a[], int s, int e)
{
    int p = a[e - 1];
    int i = s - 1;
    int j = s;

    for (; j <= e - 2; j++)
    {
        if (a[j] <= p)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e - 1]);
    return i + 1;
}

void quickSort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(a, s, e);

    quickSort(a, s, p);
    quickSort(a, p + 1, e);
}

int main()
{
    int a[] = {5, 4, 3, 6, 1, 16, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    quickSort(a, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}