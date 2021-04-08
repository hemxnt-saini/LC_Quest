#include <iostream>
using namespace std;

int binary(int n)
{
    int ans = 0;
    int p = 1;
    while (n > 0)
    {
        int last = n & 1;
        ans = ans + (last * p);
        p = p * 10;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binary(n);
}