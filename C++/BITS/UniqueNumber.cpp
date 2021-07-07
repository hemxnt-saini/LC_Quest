#include <iostream>
using namespace std;

int UniqueInPair(int ans[], int n)
{
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        sol = sol ^ ans[i];
    }

    return sol;
}
int UniqueInAnything(int ans[], int n)
{
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        sol = sol ^ ans[i];
    }

    return sol;
}

int main()
{
    int ans[] = {2, 5, 6, 6, 5, 2, 8};
    int n = sizeof(ans) / sizeof(ans[0]);

    // cout << UniqueInPair(ans, n);
    cout << UniqueInAnything(ans, n);
}
