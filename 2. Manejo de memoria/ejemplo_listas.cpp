#include <iostream>

struct Node {
    int value;
    Node* next;
};

void insert(Node*& list, int x)
{
    Node* p = new Node;
    p->value = x;
    p->next = list;
    list = p;
}

int main()
{
    Node* list = nullptr;
    insert(list, 7);
    insert(list, 10);
    insert(list, 4);

    return 0;
}
