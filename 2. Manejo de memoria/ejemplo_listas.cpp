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

void display(Node* list)
{
    Node* current = list;
    std::cout << "[";
    while (current) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << "]\n";
}

int length(Node* list)
{
    Node* current = list;
    int counter = 0;
    while (current) {
        counter++;
        current = current->next;
    }
    return counter;
}

void dispose(Node*& list)
{
    Node* current = list;
    while (list) {
        list = list->next;
        delete current;
        current = list;
    }
}

int main()
{
    Node* start = nullptr;
    display(start);
    std::cout << "length(start) = " << length(start) << "\n";
    insert(start, 7);
    insert(start, 10);
    insert(start, 4);
    insert(start, 20);
    display(start);
    std::cout << "length(start) = " << length(start) << "\n";

    Node* other = nullptr;
    insert(other, 8);
    insert(other, 9);
    display(other);

    dispose(start);
    dispose(other);

    return 0;
}
