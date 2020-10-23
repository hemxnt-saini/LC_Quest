#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 1;
    for (int c = 2; c <= 4; c++)
    {
        a = b + 1; //a=2
        b = b + a; //b=1+2=3

        if (c + 1 > 2) //2+1>2
        {
            continue;
        }
        a = a + 1;
    }
    cout << a + b;
}