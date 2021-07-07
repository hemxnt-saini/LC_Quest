#include <iostream>
using namespace std;

int main()
{

    int A[5] = {-1, -4, -3, 2, -5};
    int z = 0;
    int y = 4;

    for (int i = 0; i < 5; i++)
    {
        if (A[i] >= 0)
        {
            cout << "y=" << y << endl;
            A[y] = A[i];
            --y;
            cout << "y=" << y << endl;
        }
        else
        {
            cout << "z=" << z << endl;
            A[z] = A[i];
            ++z;
            cout << "z=" << z << endl;
        }

        cout << "z=" << z << "y=" << y << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
}