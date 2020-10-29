#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, ans;
    cout << "Enter Size of Array: " << endl;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << endl;
        cin >> A[i];
    }
    sort(A, A + n);
    ans = A[n - 1] - A[0];
    cout << ans;
}