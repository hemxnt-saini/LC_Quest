#include <iostream>
using namespace std;

bool checkPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;

    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    // char c[] = {'a', 'b', 'c', 'b', 'c', 'b', 'a'};
    // int n = sizeof(c) / sizeof(c[0]);

    string s;
    cin >> s;

    if (checkPalindrome(s))
        cout << "Yup";
    else
        cout << "Nope";
}