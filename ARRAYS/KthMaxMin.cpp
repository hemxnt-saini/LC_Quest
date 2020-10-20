#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int A[] = {3, 6, 2, 8, 0, 1};
    int l = sizeof(A) / sizeof(A[0]);
    int n;
    cout << "Enter Kth Element -" << endl;
    cin >> n;

    sort(A, A + l);
    cout << "The " << n << "th smallest element is " << A[n - 1] << endl;
    // int A[6] = {0, 1, 2, 3, 6, 8};

    int start = 0;
    int end = l - 1;

    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
    // int A[6] = {8,6,3,2,1,0};

    cout << "The " << n << "th largest element is " << A[n - 1];
}