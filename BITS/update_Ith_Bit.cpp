#include <iostream>
using namespace std;

int main()
{
    int n, i, b;
    cin >> n >> i >> b;

    int mask;

    if (b == 0)
    {
        mask = ~(1 << i);
        n = n & mask;
    }
    else
    {
        mask = 1 << i;
        n = n | mask;
    }

    cout << n;
}