#include <iostream>
using namespace std;

int sqaure_root(int n)
{
    int s = 0;
    int e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (mid * mid > n)
        {
            e = mid - 1;
        }
        if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        if (mid * mid == n)
        {
            return mid;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = sqaure_root(n);
    cout << ans << endl;
}