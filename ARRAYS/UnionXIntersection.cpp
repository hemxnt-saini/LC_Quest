#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 1;

    for (int c = 4; c <= 7; c++)
    {
        if (a > c)
        {
            a = a - 1;
            break;
        }
        else
        {
            a = a + c;
            if (c)
            {
                a = a + 1;
            }
        }
    }
    cout << a + b;
}