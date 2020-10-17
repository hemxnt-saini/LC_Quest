#include <iostream>
#include <stack>
using namespace std;

int main()
{
    //     int n;
    //     cout << "Enter Size of Array" << endl;
    //     cin >> n;
    //     int A[n];
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cout << "Enter Elements" << endl;
    //         cin >> A[i];
    //     }
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         cout << A[i] << endl;
    //     }

    // USING STACK

    //     int n;
    //     cout << "Enter Size of Array" << endl;
    //     cin >> n;
    //     int A[n];
    //     stack<int> S;
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cout << "Enter Elements" << endl;
    //         cin >> A[i];
    //         S.push(A[i]);
    //     }

    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         cout << S.top() << endl;
    //         S.pop();
    //     }

    // BEST APPROACH

    int n;
    cout << "Enter Size of Array" << endl;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Elements" << endl;
        cin >> A[i];
    }
    int start, end, temp;
    start = 0;
    end = n - 1;

    while (start < end)
    {
        temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}