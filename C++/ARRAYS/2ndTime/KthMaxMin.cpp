#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A[6] = {2, 4, 5, 1, 3, 7};
    sort(A, A + 6);

    int n;
    cout << "Enter kth element: " << endl;
    cin >> n;

    cout << n << "maximum" << A[6 - n] << endl;
    cout << n << "minimum" << A[n - 1] << endl;
}