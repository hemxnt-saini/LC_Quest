#include <iostream>
using namespace std;

int merge(int a[], int s, int e)
{
    int count = 0;
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[100];

    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            count++;
            temp[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        count++;
        temp[k++] = a[j++];
    }

    for (int i = 0; i <= e; i++)
    {
        a[i] = temp[i];
    }
    return count;
}

int inversionCount(int a[], int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int mid = (s + e) / 2;
    int x = inversionCount(a, s, mid);
    int y = inversionCount(a, mid + 1, e);
    int z = merge(a, s, e);
    return x + y + z;
}

int main()
{
    int a[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(a) / sizeof(a[0]);

    cout << inversionCount(a, 0, n) << endl;
}