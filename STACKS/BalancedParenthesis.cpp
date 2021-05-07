#include <iostream>
#include <stack>

using namespace std;

bool checkBalancedParanthesis(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' or s[i] == '[' or s[i] == '{')
        {
            stk.push(s[i]);
        }
        else if (s[i] == ')' and stk.top() == '(')
        {
            stk.pop();
        }
        else if (s[i] == '}' and stk.top() == '{')
        {
            stk.pop();
        }
        else if (s[i] == ']' and stk.top() == '[')
        {
            stk.pop();
        }
        else
        {
            return false;
        }
    }
    if (stk.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;

    if (checkBalancedParanthesis(s))
    {
        cout << "Yes BalancedParenthesis";
    }
    else
    {
        cout << "Not BalancedParenthesis";
    }
}