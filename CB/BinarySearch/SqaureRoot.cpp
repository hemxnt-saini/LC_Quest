#include <iostream>
using namespace std;

int squareRoot(int n)
{
    int s = 0;
    int e = n / 2;
    int ans;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            // ans = mid;
            s = mid + 1;
        }
    }
    // return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << squareRoot(n);
}