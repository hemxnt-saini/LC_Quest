#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class stack
{
    vector<T> v;

public:
    bool isEmpty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        return false;
    }
    void push(T d)
    {
        v.push_back(d);
    }

    void pop()
    {
        if (!isEmpty())
        {

            v.pop_back();
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    T top()
    {
        return v[v.size() - 1];
    }

    void print()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
};

int main()
{
    stack<char> s;
    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');
    s.push('E');
    s.print();
    cout << endl;
    s.pop();
    s.pop();
    s.pop();
    s.print();
    cout << endl;
    cout << s.top();
}