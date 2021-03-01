#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char a[])
{
    int len = strlen(a);
    int s = 0;
    int e = len - 1;

    while (s <= e)
    {
        if (a[s] == a[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char a[10];
    cin >> a;

    if (palindrome(a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}