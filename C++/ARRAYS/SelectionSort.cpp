#include <iostream>
using namespace std;

int min(int A[], int n, int k)
{
    int MIN = A[k];
    int LOC = k;
    for (int i = k; i < n; i++)
    {
        if (MIN > A[i])
        {
            MIN = A[i];
            LOC = i;
        }
    }
    return LOC;
}

void Swap(int *n, int *m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}

int main()
{
    int A[5] = {52, 42, 25, 12, 7};
    int MinIndex;

    for (int i = 0; i < 5; i++)
    {
        MinIndex = min(A, 5, i);
        Swap(&A[i], &A[MinIndex]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    // mini = min(A, 5, 0);
    // cout << mini << endl;
    // int temp1 = A[0];
    // A[0] = A[mini];
    // A[mini] = temp1;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << " ";
    // }

    // cout << endl
    //      << endl;
    // mini = min(A, 5, 1);
    // cout << mini << endl;
    // int temp2 = A[1];
    // A[1] = A[mini];
    // A[mini] = temp2;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << " ";
    // }
}