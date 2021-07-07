#include <iostream>
using namespace std;

int KadaneAlgo(int A[], int n)
{
    int max = 0, ans = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        max = max + A[i];
        if (max < A[i])
            max = A[i];

        if (ans < max)
            ans = max;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Size of Array: " << endl;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << ":" << endl;
        cin >> A[i];
    }
    int ans = KadaneAlgo(A, n);
    cout << "The Sum of Largest Contiguous Subarray is : " << ans << endl;
}
