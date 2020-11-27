#include <iostream>
using namespace std;

void mergesort(int A[], int n)
{
}

int main()
{
    int A[10] = {22, 33, 66, 11, 88, 44, 99, 55, 77, 10};
    mergesort(A, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
}