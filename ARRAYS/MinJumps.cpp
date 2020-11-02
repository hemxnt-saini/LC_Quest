#include <iostream>
using namespace std;

int main()
{
    int A[11] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int end = A[10];
    int count = 0;

    for (int i = 1; i < 10; i++)
    {
        while (A[i] == end)
        {
            cout << count << endl;
            break;
        }
        count = count + 1;
    }
}