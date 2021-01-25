#include <iostream>
using namespace std;
int main()
{
    int A[] = {4, 3, 2, 5, 6};
    int n = sizeof(A) / sizeof(A[0]);
    int end = A[n - 1];

    for (int i = n - 1; i > 0; i--)
        A[i] = A[i - 1];
    A[0] = end;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}