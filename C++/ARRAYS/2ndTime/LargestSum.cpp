#include <iostream>
#include <climits>
using namespace std;

int LargestSum(int A[], int n)
{
    int sumInitial = 0;
    int sumFar = 0;
    for (int i = 0; i < n; i++)
    {
        sumFar = sumFar + A[i];
        if (sumFar > sumInitial)
        {
            sumInitial = sumFar;
        }
        if (sumFar < 0)
        {
            sumFar = 0;
        }
    }
    return sumInitial;
}

int main()
{
    int A[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int ans = LargestSum(A, 8);
    cout << ans << endl;
}