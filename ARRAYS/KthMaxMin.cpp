#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int A[6] = {3, 6, 2, 8, 0, 1};
    int n;
    cout << "Enter Kth Element -" << endl;
    cin >> n;

    // int B[6] = {0, 1, 2, 3, 6, 8};

    sort(A, A + 6);

    cout << "The " << n << "th smallest element is " << A[n - 1] << endl;

    for (int i = 5; i >= 0; i--)
    {
        cout << A[i];
    }

    cout << "The " << n << "th largest element is " << A[n - 1];
}