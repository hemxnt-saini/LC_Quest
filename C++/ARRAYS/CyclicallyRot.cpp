#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    B[0] = A[n - 1];

    for (int i = 0; i < n; i++)
    {
        B[i + 1] = A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
}