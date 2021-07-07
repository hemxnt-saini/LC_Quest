#include <iostream>
using namespace std;

int main()
{
    int A[7] = {0, 1, 0, 1, 2, 0, 1};
    int zero = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < 7; i++)
    {
        if (A[i] == 0)
        {
            zero = zero + 1;
        }
        else if (A[i] == 1)
        {
            one = one + 1;
        }
        else
        {
            two = two + 1;
        }
    }
    int i = 0;
    while (zero > 0)
    {
        A[i] = 0;
        zero--;
        i++;
    }

    while (one > 0)
    {
        A[i] = 1;
        one--;
        i++;
    }

    while (two > 0)
    {
        A[i] = 2;
        two--;
        i++;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
}