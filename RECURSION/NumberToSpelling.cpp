#include <iostream>
// #include <cstring>
using namespace std;

void numberToSpelling(int n)
{
    string a[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if (n == 0)
    {
        return;
    }

    numberToSpelling(n / 10);
    int d = n % 10;
    cout << a[d] << " ";
}

int main()
{
    int n;
    cin >> n;

    numberToSpelling(n);
}