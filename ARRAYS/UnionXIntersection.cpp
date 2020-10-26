#include <iostream>
using namespace std;

int main()
{
    //A[5]={1,2,3,4,5}
    //B[3]={5,6,7}
    //U={1,2,3,4,5,6,7}
    //I={5}

    int n, m, b;
    cout << "Enter Size of Array 1: ";
    cin >> n;
    cout << "Enter Size of Array 2: ";
    cin >> m;
    b = n + m;
    int A[n], B[m], C[b];

    cout << "Enter Elements of Array 1:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter Elements of Array 2:" << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                B[j] = 0;
            }

            C[j + n] = B[j];
        }
        C[i] = A[i];
    }

    for (int i = 0; i < b; i++)
    {
        cout << C[i] << " ";
    }
}