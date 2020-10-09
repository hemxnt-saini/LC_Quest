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
