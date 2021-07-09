#include <iostream>
using namespace std;

void printInc(int n)
{
    if (n == 0)
    {
        return;
    }
    printInc(n - 1);
    cout << n << " ";
}
void printDec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printDec(n - 1);
}

int main()
{

    int n;
    cin >> n;

    printInc(n);
    cout << endl;
    printDec(n);
}