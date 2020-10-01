void printList(struct Node* node)
{
    struct Node* last;
    cout<<"Traversal in forward direction";
    while (node != NULL) {
        cout<<node->data;
        last = node;
        node = node->next;
    }

    cout<<"Traversal in reverse direction";
    while (last != NULL) {
        cout<<last->data;
        last = last->prev;
    }
}
