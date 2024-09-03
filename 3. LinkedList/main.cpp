#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<std::string> a;
    std::cout << a.to_string() << "\n";
    a.insert_front("lunes");
    a.insert_front("martes");
    a.insert_front("miércoles");
    std::cout << a.to_string() << "\n";
    return 0;
}
