#include <iostream>
#include <cstring>
using namespace std;
void filterChar(string s, int n)
{
    int j = 0;
    while (n > 0)
    {
        int last_bit = (n & 1);
        if (last_bit == 1)
        {
            cout << s[j];
        }
        j++;
        n = n >> 1;
    }
    cout << endl;
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < (1 << n); i++)
    {
        filterChar(s, i);
    }
}