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

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int length(node *head)
{
    int c = 1;
    while (head->next != NULL)
    {
        head = head->next;
        c++;
    }
    return c;
}

int kthLast(node *head, int k)
{
    int n = length(head);

    if (head == NULL or k == n)
    {
        return head->data;
    }

    node *slow = head;
    node *fast = head;

    int i = 0;
    while (i < k)
    {
        fast = fast->next;
        i++;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow->next->data;
}

int main()
{
    node *head = NULL;

    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 7);
    insertAtHead(head, 6);
    insertAtHead(head, 9);
    print(head);
    cout << endl;
    cout << kthLast(head, 7);
}