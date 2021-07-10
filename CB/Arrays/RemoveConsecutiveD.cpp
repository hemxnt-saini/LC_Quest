#include <iostream>
using namespace std;

string removeDuplicates(string str)
{
    string ans;

    int i = 0;
    int j = 1;

    while (j <= str.length())
    {
        if (str[i] == str[j])
        {
            j++;
        }
        else
        {
            ans = ans + str[i];
            i = j;
            j = j + 1;
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << removeDuplicates(s);
}