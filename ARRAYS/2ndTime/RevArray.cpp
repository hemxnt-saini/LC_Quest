#include <iostream>
using namespace std;

// void Reverse(int *p, int n)
// {
//     int start = *p;
//     int end = *(p + 2 * (n - 1));

//     cout << "p = " << p << endl;
//     cout << "p + 8 = " << &p + 8 << endl;
//     cout << "p = " << *p << endl;
//     cout << "p+8 = " << *(&p + 8) << endl;
//     cout << "Start" << start << endl;
//     cout << "End" << end << endl;

//     int temp = start;
//     start = end;
//     end = temp;
// }

int main()
{
    int A[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> A[i];
    }

    int start = 0;
    int end = 5;

    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << " ";
    }
}
