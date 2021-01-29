#include <iostream>
#include <algorithm>
using namespace std;

int getMinHeight(int A[], int n, int k)
{
    // A[0] = A[0] + k;
    // A[n - 1] = A[n - 1] - k;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > k)
        {
            A[i] = A[i] - k;
        }
        else
        {
            A[i] = A[i] + k;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    sort(A, A + n);
    int ans = A[n - 1] - A[0];
    return ans;
}

int main()
{
    int A[] = {1, 5, 15, 10};
    int n = sizeof(A) / sizeof(A[0]);
    int k;
    cin >> k;
    int min = getMinHeight(A, n, k);
    cout << min;
}