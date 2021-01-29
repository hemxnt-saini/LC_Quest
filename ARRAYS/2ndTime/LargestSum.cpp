#include <iostream>
using namespace std;

int LargestSum(int A[], int n)
{
    int sumInitial = 0;
    int sumFar = 0;
    for (int i = 0; i < n; i++)
    {
        sumInitial = sumInitial + A[i];
        if (A[i] <= sumInitial)
        {
        }
    }
    return sumInitial;
}

int main()
{
    int A[5] = {1, 2, 3, 2, 5};
    int ans = LargestSum(A, 5);
    cout << ans << endl;
}