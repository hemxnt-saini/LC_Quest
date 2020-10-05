#include <iostream>
using namespace std;

int n;
cin >> n;
int A[5];

void Push(int x)
{
}
void Pop()
{
}
void Print()
{
    for (int i = 0; i < 5; i++)
    {
        cout << A[i];
    }
}

void top()
{
    cout << A[4];
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