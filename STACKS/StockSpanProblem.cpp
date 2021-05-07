#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int stockSpan(int prices[], int n, int span[])
{
    stack<int> s;

    s.push(prices[0]);

    for (int i = 1; i < n; i++)
    {
        int currentPrice = prices[i];

        while (currentPrice >= s.top())
        {
            s.pop();
        }
        s.push(currentPrice);
    }

    int topSpan = s.top();
    int countTopSpan = 0;

    s.pop();
    int bottomSpan = s.top();
    int countbottomSpan = 0;

    int i = 0;
    while (prices[i] != topSpan)
    {
        countTopSpan++;
        i++;
    }

    int j = 0;
    while (prices[j] != bottomSpan)
    {
        countbottomSpan++;
        j++;
    }

    return abs(countbottomSpan - countTopSpan);
}

int main()
{
    int prices[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(prices) / sizeof(prices[0]);
    int span[] = {0, 1, 2, 3, 4, 5};
    cout << stockSpan(prices, n, span);
}