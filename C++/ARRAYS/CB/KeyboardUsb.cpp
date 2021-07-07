#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return b < a;
}

int getMoneySpent(int a[], int b[], int bud, int n1, int n2)
{
    sort(a, a + n1, compare);
    sort(b, b + n2, compare);

    int i = 0;
    int j = 0;

    while (j < n2)
    {
        if (a[i] < b[j] && b[j] < bud)
        {
            if ((a[i] + b[j]) <= bud)
            {
                return (a[i] + b[i]);
            }
            else
            {
                i++;
            }
        }
        else
        {
            j++;
        }
    }
    return -1;
}

int main()
{
    int bud, n1, n2;
    cin >> bud >> n1 >> n2;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    cout << getMoneySpent(a, b, bud, n1, n2);
}