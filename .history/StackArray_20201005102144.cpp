#include <stdio.h>
#include <stdlib.h>
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
        printf("%d", A[i]);
    }
}

void top()
{
    printf("%d", A[4]);
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