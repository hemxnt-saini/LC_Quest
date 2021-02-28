#include <iostream>
#include <algorithm>
using namespace std;

int MaxSumSubarray(int *a, int n)
{
    int s1 = 0;
    int s2 = 0;

    for (int i = 0; i < n; i++)
    {
        s1 = s1 + a[i];

        if (s1 < 0)
        {
            s1 = 0;
        }

        if (s1 > s2)
        {
            s2 = s1;
        }
    }
    return s2;
}

int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(a) / sizeof(a[0]);
    cout << MaxSumSubarray(a, n);
}