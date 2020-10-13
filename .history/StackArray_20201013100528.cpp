#include <iostream>
using namespace std;

struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};

struct ArrayStack *createStack(int cap)
{
    struct ArrayStack *s;
    s = (struct ArrayStack *)malloc(sizeof(struct ArrayStack *));
    s->top = -1;
    s->capacity = cap;
    s->array = (int *)malloc(sizeof(int) * s->capacity);

    return s;
}

int isFull(struct ArrayStack *s)
{
    if (s->top == s->capacity - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct ArrayStack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}

void Push(struct ArrayStack *s, int x)
{

    if (!isFull(s))
    {
        s->top++;
        s->array[s->top] = x;
    }
}

int Pop(struct ArrayStack *s)
{
    if (!isEmpty(s))
    {
        int data;
        data = s->array[s->top];
        s->top--;
        return data;
    }
    return -1;
}

void Print(struct ArrayStack *s)
{
    if (isEmpty(s))
    {
        cout << endl
             << "Empty Stack";
        return;
    }
    cout << endl
         << "Not Empty Stack";
}

int main()
{
    struct ArrayStack *stack;
    stack = createStack(4);
    int choice, item;
    while (1)
    {
        cout << endl
             << "1.Push";
        cout << endl
             << "2.Pop";
        cout << endl
             << "3.Print";
        cout << endl
             << "Enter Choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter Number" << endl;
            cin >> item;
            Push(stack, item);
            break;
        case 2:
            cout << endl;
            Pop(stack);
            break;
        case 3:
            cout << endl;
            Print(stack);
        }
    }
}