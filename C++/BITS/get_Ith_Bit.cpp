#include <iostream>
using namespace std;

int main()
{
    int n;
    int c;
    cin >> n >> c;

    int mask = 1 << c;

    if ((n & mask) == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
}