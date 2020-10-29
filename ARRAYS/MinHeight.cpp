#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int A[6] = {6, 12, 9, 13, 17};
    int B[6] = {6, 12, 9, 13, 17};
    stack<int> S;
    int x;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            x = A[i] - B[j];
            S.push(x);
        }
    }

    while (!S.empty())
    {
        cout << S.top() << endl;
        S.pop();
    }
}