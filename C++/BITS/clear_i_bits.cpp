#include <iostream>
using namespace std;

int main()
{
    int n;
    int c;
    cin >> n >> c;

    int mask = -1 << c;

    int ans = mask & n;
    cout << ans << endl;
}