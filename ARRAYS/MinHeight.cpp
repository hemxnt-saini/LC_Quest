#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, last, first, ans, k;
    cout << "Enter Size of Array: " << endl;
    cin >> n;
    cout << "Enter Value of K: " << endl;
    cin >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << endl;
        cin >> A[i];
    }
    sort(A, A + n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << endl;
        cin >> A[i];
    }
    last = A[n - 1] - k;
    first = A[0] + k;
    ans = last - first;
    cout << (ans > 0 ? ans : -ans) << endl;
}