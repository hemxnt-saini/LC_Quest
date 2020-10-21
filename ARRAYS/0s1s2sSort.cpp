#include <iostream>
#include <algorithm>
using namespace std;

void SortEl(int A[], int n)
{
}
void Print(int A[], int n)
{
}
int main()
{
    int n, l;
    cout << "No. Of Test Cases" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Size of Array " << i << endl;
        cin >> l;
        int A[l];
        for (int x = 0; x < l; x++)
        {
            cout << "Enter Array Element " << x << endl;
            cin >> A[x];
        }
        sort(A, A + l);
        for (int i = 0; i < l; i++)
        {
            cout << A[i] << endl;
        }
    }
}