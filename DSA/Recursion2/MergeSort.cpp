#include <iostream>
#include <vector>
using namespace std;

void mergeT(int *v, int s, int e)
{
    int a[100];

    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    while (i <= mid && j <= e)
    {

        if (v[i] < v[j])
        {
            a[k++] = v[i++];
        }
        else
        {
            a[k++] = v[j++];
        }
    }

    while (i <= mid)
    {
        a[k++] = v[i++];
    }

    while (j <= e)
    {
        a[k++] = v[j++];
    }

    for (int i = 0; i < e; i++)
    {
        v[i] = a[i];
        // cout << a[i] << " ";
    }
}

void mergeSort(int *v, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    mergeSort(v, s, mid);
    mergeSort(v, mid + 1, e);

    mergeT(v, s, e);
}

int main()
{
    int v[] = {3, 5, 7, 2, 4, 6, 4, 5, 8, 1};
    int n = sizeof(v) / sizeof(v[0]);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    mergeSort(v, 0, n - 1);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}