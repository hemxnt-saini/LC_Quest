#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, t, count = 1, flag = 0;

    // cout << "Enter Size of Array: " << endl;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        // cout << "Enter Element " << i << endl;
        cin >> A[i];
    }
    sort(A, A + n);

    for (int i = 0; i < n; i++)
    {
        // cout << "Enter Element " << i << endl;
        cin >> A[i];
    }
    int end = A[n - 1];
    for (int i = 1; i < 11; i++)
    {
        if (flag != 0)
        {
            break;
        }

        while (A[i] == end)
        {
            cout << count << endl;
            flag = flag + 1;
            break;
        }
        count = count + 1;
    }
}