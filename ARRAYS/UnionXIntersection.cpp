#include <iostream>
using namespace std;

int main()
{
    //A[5]={1,2,3,4,5}
    //B[3]={5,6,7}
    //U={1,2,3,4,5,6,7}
    //I={5}

    int A[5] = {1, 2, 3, 4, 5};
    int B[3] = {5, 6, 7};
    int C[8];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i] == B[j])
            {
                C[j] = B[j];
                B[j] = 0;
            }
            else
            {
                C[j] = B[j];
            }
        }
        C[i] = A[i];
    }

    for (int i = 0; i < 8; i++)
    {
        cout << C[i] << " ";
    }
}