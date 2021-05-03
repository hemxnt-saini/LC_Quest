#include <iostream>
using namespace std;

void longestPalindrome(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        char c = i;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[c] == s[i])
            {
                int start = c + 1;
                int end = i - 1;

                while (start < end)
                {
                    cout << s[c] << " ";
                    if (s[start] == s[end])
                    {
                        cout << s[start] << " ";
                        start++;
                        end--;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    string s;
    cin >> s;

    longestPalindrome(s);
}