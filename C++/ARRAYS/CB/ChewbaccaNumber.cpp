#include <iostream>
#include <cstring>
using namespace std;

void CN(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 5 && a[i] != 9)
        {
            a[i] = 9 - a[i];
        }
    }
}

int main()
{
    // int a[] = {9, 8, 7, 2};
    int a[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    CN(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}