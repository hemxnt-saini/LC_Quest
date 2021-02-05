// #include <iostream>
// using namespace std;

// int MinJump(int A[], int n)
// {
//     int count = 0;
//     int sum = 0;
//     int end = n - 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (sum <= end)
//         {
//             sum = sum + A[i];
//             count = count + 1;
//         }
//     }

//     return count - 1;
// }

// int main()
// {
//     int A[] = {1, 4, 3, 2, 6, 7};
//     int n = sizeof(A) / sizeof(A[0]);
//     int ans = MinJump(A, n);
//     cout << ans << endl;
// }

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