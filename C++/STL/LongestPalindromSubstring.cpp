#include <iostream>
using namespace std;

bool checkPalindrome(string s, int start, int end)
{
    int i = 0;
    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void longestPalindrome(string s)
{
    string newString = "";
    int newFill = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cout << "Element-" << i << " -> " << s[i] << endl;
        for (int j = i + 1; j < s.length(); j++)
        {
            int start = i;
            cout << "Start Index-" << i << " -> " << s[start] << endl;
            cout << "Second Element-" << j << " -> " << s[j] << endl;

            if (s[start] == s[j])
            {
                int end = j;
                cout << "End Index-" << j << " -> " << s[j] << endl;

                if (checkPalindrome(s, start, end))
                {
                    cout << "TRUE!";

                    for (int k = start; k <= end; k++)
                    {
                        cout << "Each Final Element-> " << s[k] << " ";

                        // newString[newFill++] = s[k];
                    }
                    cout << endl;
                }
            }
            else
            {
                i++;
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