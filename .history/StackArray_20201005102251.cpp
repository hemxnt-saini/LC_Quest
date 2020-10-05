#include <iostream>
using namespace std;

int n;
cin >> n;
int A[n];

void Push(int x)
{
}
void Pop()
{
}
void Print()
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
}

void top()
{
    cout << A[n - 1];
}

int main()
{
    Push(4);
    Print();
    Push(3);
    Print();
    Push(7);
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Push(10);
    Print();
    top();
    Print();
}