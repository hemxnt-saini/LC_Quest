#include <iostream>
using namespace std;

int main()
{

    int A[5] = {21, 12, 4, 54, 32};
    int max = A[0];
    int min = A[0];

    for (int i = 0; i < 5; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    cout << "MAX:" << max << endl;
    cout << "MIN:" << min << endl;
}