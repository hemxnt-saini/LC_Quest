#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int A[] = {3, 6, 2, 3, 8, 0, 1, 5, 7, 8, 9};
    int l = sizeof(A) / sizeof(A[0]);
    int n;
    cout << "Enter Kth Element -" << endl;
    cin >> n;

    sort(A, A + l);
    // A[]={0,1,2,3,5,6,7,8,9};
    cout << "The " << n << "th smallest element is " << A[n - 1] << endl;
    cout << "The " << n << "th largest element is " << A[l - n] << endl;

    // int start = 0;
    // int end = l - 1;

    // while (start < end)
    // {
    //     int temp = A[start];
    //     A[start] = A[end];
    //     A[end] = temp;
    //     start++;
    //     end--;
    // }
    // // int A[6] = {8,6,3,2,1,0};

    // cout << "The " << n << "th largest element is " << A[n - 1];
}