#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int d2 = floor(n / 2);
    int d3 = floor(n / 3);
    int d5 = floor(n / 5);
    int a1 = d2 + d3 + d5;

    int d23 = n / (2 * 3);
    int d25 = n / (2 * 5);
    int d53 = n / (5 * 3);
    int a2 = d23 + d53 + d25;

    int d235 = n / (2 * 3 * 5);

    cout << (a1 - a2) + d235;
}