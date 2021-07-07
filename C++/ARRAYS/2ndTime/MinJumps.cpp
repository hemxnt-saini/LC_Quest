#include <iostream>
using namespace std;

int MinJump(int A[], int n)
{
    int count = 0;
    int sum = 0;
    int end = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (sum <= end)
        {
            sum = sum + A[i];
            count = count + 1;
        }
    }

    return count - 1;
}

int main()
{
    int A[] = {1, 4, 3, 2, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);
    int ans = MinJump(A, n);
    cout << ans << endl;
}
