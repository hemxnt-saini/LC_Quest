#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int lengthOfLongestSubstring(string s)
{

    map<char, int> charMap;
    int start = -1;
    int maxLen = 0;

    for (int i = 0; i < s.size(); i++)
    {
        cout << "CharMap- " << charMap.count(s[i]) << endl;
        if (charMap.count(s[i]) != 0)
        {
            start = max(start, charMap[s[i]]);
            cout << "Start- " << start << endl;
        }
        cout << "CharMap S[i]- " << charMap[s[i]] << endl;
        charMap[s[i]] = i;
        cout << "CharMap S[i]After- " << charMap[s[i]] << endl;
        maxLen = max(maxLen, i - start);
        cout << "Maxlen- " << maxLen << endl;
    }

    return maxLen;
}

int main()
{
    string s;
    cin >> s;

    cout << lengthOfLongestSubstring(s);
}