#include <iostream>
using namespace std;

void Reverse(int *A, int n)
{

    int start = *A;
    int end = *(A + n - 1);

    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int A[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> A[i];
    }

    // Reverse(A, 6);

    int start = 0;
    int end = 5;

    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << " ";
    }
}
