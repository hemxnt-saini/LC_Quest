#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int a[] = {5, 3, 6, 8, 9, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int key;
    cin >> key;

    int idx = linearSearch(a, n, key);

    if (idx)
    {
        cout << "Present at: " << idx << endl;
    }
    else
    {
        cout << "NotPresent" << endl;
    }
}