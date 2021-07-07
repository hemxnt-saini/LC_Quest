#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main()
{
    int coins[] = {1, 2, 5, 10, 50, 100, 200, 500, 2000};
    int n = sizeof(coins) / sizeof(coins[0]);
    int money = 168;

    while (money > 0)
    {
        auto lbAdd = lower_bound(coins, coins + n, money, compare);
        int idx = lbAdd - coins - 1;
        int lb = coins[idx];
        cout << lb << " ";
        money = money - lb;
    }
}