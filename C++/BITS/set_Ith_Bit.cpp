#include <iostream>
using namespace std;

int main()
{
    int n;
    int c;
    cin >> n >> c;

    int mask = 1 << c;
    mask = ~(mask);

    n = n & mask;

    cout << n;
}