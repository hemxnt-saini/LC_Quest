// C++ program to print largest contiguous array sum
#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {1, 2, 3, -2, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
