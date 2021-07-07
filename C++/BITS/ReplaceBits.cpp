#include <iostream>
using namespace std;

int main()
{

    int n, m, i, j;

    cin >> n >> m >> i >> j;

    int mask = m << i;

    n = clearRangeIToJ(int n, int i, int j);

    int ans = mask | n;
    cout << ans << endl;
}