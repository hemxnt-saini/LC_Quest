#include <iostream>
using namespace std;

void INC(int n)
{
    if (n == 0)
    {
        return;
    }

    INC(n - 1);
    cout << n << " ";
}
void DEC(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    DEC(n - 1);
}

int main()
{
    int n;
    cin >> n;

    INC(n);
    cout << endl;
    DEC(n);
}