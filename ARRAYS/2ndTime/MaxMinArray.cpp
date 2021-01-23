#include <iostream>
using namespace std;

int maximum(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int minimum(int A[], int n)
{
    int min = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int main()
{
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    int max = maximum(A, 5);
    int min = minimum(A, 5);

    cout << "MAXIMUM = " << max << endl;
    cout << "MINIMUM = " << min << endl;
}