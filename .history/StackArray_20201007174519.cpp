#include <iostream>
using namespace std;
int n;
cin>>n;
int A[n];
int top = -1;

void Push(int x)
{
    A[++top] = x;
}
void Pop()
{
}
void Print()
{
    for (int i = 0; i < 10; i++)
    {
        cout << A[i];
    }
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