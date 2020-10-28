#include <iostream>
using namespace std;

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

    int meh = 0, msf = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        meh = meh + A[i];
        if (meh < A[i])
            meh = A[i];

        if (msf < meh)
            msf = meh;
    }
    cout << "The Sum of Largest Contiguous Subarray is : " << msf << endl;
}
