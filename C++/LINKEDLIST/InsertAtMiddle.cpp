#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtHead(node *&head, int d)
{
    if (head == NULL)
    {
        node *n = new node(d);
        head = n;
        return;
    }

    node *temp = new node(d);
    temp->next = head;
    head = temp;
    return;
}
void insertAtTail(node *&head, int d)
{
    if (head == NULL)
    {

        node *n = new node(d);
        head = n;
        return;
    }

    node *n = new node(d);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

    return;
}

int length(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count = count + 1;
        head = head->next;
    }
    return count;
}

void insertAtMiddle(node *&head, int d, int k)
{
    if (head == NULL or k == 0)
    {
        insertAtHead(head, d);
    }
    else if (k > length(head))
    {
        insertAtTail(head, d);
    }
    else
    {
        int jump = 1;
        node *temp = head;

        while (jump <= k - 1)
        {
            temp = temp->next;
            jump++;
        }
        node *n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;

    // insertAtMiddle(head, 5, 3);
    insertAtMiddle(head, 4, 2);
    insertAtMiddle(head, 3, 4);
    insertAtMiddle(head, 2, 1);
    insertAtMiddle(head, 1, 0);
    print(head);
}