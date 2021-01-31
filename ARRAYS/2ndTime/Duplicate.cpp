#include <iostream>
using namespace std;

int Duplicate(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                return A[i];
            }
        }
    }
    return -1;
}

int main()
{
    int A[] = {3, 3, 5, 1, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int ans = Duplicate(A, n);
    cout << ans;
}