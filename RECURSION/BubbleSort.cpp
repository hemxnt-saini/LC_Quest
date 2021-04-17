#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    if (n == 1)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
    }
    bubbleSort(a, n - 1);
}

int main()
{
    int a[] = {5, 4, 3, 6, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    bubbleSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}