#include <iostream>
using namespace std;
int main()
{
    int A[6] = {1, 1, 3, 3, 4, 5};
    int B[] = {};
    int j = 0;

    for (int i = 0; i < 6; i++)
    {
        if (A[i] != A[i + 1])
        {
            B[j] = A[i];
            j = j + 1;
        }
        else
        {
            B[j] = A[i];
            j = j + 1;
            i = i + 1;
        }
    }

    int l = sizeof(B) / sizeof(B[0]);

    for (int i = 0; i < l; i++)
    {
        cout << B[i] << " ";
    }
}