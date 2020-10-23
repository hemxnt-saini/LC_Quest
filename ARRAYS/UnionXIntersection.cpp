#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 1;

    for (int c = 4; c <= 7; c++)
    {
        if (a > c) //1>4//6>4
        {
            a = a - 1;
            break;
        }
        else
        {
            a = a + c; //a=1+4=5
            if (c)
            {
                a = a + 1; //a=6
            }
        }
    }
    cout << a + b; //6
}