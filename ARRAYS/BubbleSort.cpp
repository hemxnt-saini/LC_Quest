#include <iostream>
using namespace std;

void swap(int *n, int *m)
{
    int t = *n;
    *n = *m;
    *m = t;
}

void BubbleSort(int A[], int n)
{
    for (int round = 0; round < n - 1; round++)
    {
        for (int c = 0; c < n - 1 - round; c++)
        {
            int flag = 0;
            if (A[c] > A[c + 1])
            {
                flag = 1;
                swap(&A[c], &A[c + 1]);
            }
            if (flag == 0)
            {
                return;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter Size of Array" << endl;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << endl;
        cin >> A[i];
    }
    BubbleSort(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}