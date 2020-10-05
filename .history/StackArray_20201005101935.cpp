#include <stdio.h>
#include <stdlib.h>

int n;
scanf("%d", &n);
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
        printf("%d", A[i]);
    }
}

void top()
{
    printf("%d", A[n]);
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