#include <iostream>
using namespace std;

int romanToInt(string s)
{
    int i;
    long sum = 0;
    int len = s.length();
    for (i = 1; i <= s.length(); i++)
    {
        if (s[i - 1] == 'I' && s[i] == 'V')
        {
            sum = sum + 4;
            i++;
        }
        else if (s[i - 1] == 'I' && s[i] == 'X')
        {
            sum += 9;
            i++;
        }
        else if (s[i - 1] == 'X' && s[i] == 'L')
        {
            sum += 40;
            i++;
        }
        else if (s[i - 1] == 'X' && s[i] == 'C')
        {
            sum += 90;
            i++;
        }
        else if (s[i - 1] == 'C' && s[i] == 'D')
        {
            sum += 400;
            i++;
        }
        else if (s[i - 1] == 'C' && s[i] == 'M')
        {
            sum += 900;
            i++;
        }
        else if (s[i - 1] == 'I')
            sum += 1;
        else if (s[i - 1] == 'V')
            sum += 5;
        else if (s[i - 1] == 'X')
            sum += 10;
        else if (s[i - 1] == 'L')
            sum += 50;
        else if (s[i - 1] == 'C')
            sum += 100;
        else if (s[i - 1] == 'D')
            sum += 500;
        else
            sum += 1000;
    }
    return sum;
}