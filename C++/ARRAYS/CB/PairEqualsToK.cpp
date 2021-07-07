#include <iostream>
#include <algorithm>
using namespace std;

void PairEqualsToK(int *a, int n, int k)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        if ((a[s] + a[e]) == k)
        {
            cout << a[s] << "," << a[e] << endl;
            s++;
            e--;
        }
        else if ((a[s] + a[e]) > k)
        {
            e = e - 1;
        }
        else
        {
            s = s + 1;
        }
    }
}

int main()
{
    int a[] = {10, 20, 15, 35, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    int k;
    cin >> k;
    PairEqualsToK(a, n, k);
}