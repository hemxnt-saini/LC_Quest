#include <iostream>
using namespace std;

int main()
{

    int A[5] = {-1, 4, 3, -2, -5};

    for (int i = 0; i < 5; i++)
    {
        if (A[i] < 0)
        {
            A[i++] = A[i];
        }
        A[5] = A[i];
    }
}