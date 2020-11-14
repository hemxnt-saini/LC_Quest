#include <iostream>
using namespace std;

void swap(int *n, int *m)
{
    int t = *n;
    *n = *m;
    *m = t;
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

    for (int round = 0; round < n - 1; round++)
    {
        for (int c = 0; c < n - 1 - round; c++)
        {
            if (A[c] > A[c + 1])
            {
                swap(&A[c], &A[c + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}