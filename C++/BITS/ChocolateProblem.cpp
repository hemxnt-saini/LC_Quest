#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int d, m;
    cin >> d >> m;

    int count = 0;

    int x = 0;
    int y = 0;

    while (y < n)
    {
        int sum = 0;
        y = y + m - 1;
        if (y != 0)
        {
            for (int i = x; i <= y; i++)
            {
                sum = sum + a[i];
            }
        }
        else
        {
            sum = sum + a[0];
        }

        if (sum == d)
        {
            count++;
        }
        x++;
    }

    cout << count;
}
