#include <iostream>
using namespace std;

void InsertionSort(int A[], int n)
{
    int j, i, temp;
    for (i = 1; i < n; i++)
    {
        temp = A[i];
        for (j = i - 1; j >= 0 && temp < A[j]; j--)
        {
            A[j + 1] = A[j];
        }
        A[j + 1] = temp;
    }
}

int main()
{
    int A[5] = {23, 12, 45, 3, 15};
    InsertionSort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
}