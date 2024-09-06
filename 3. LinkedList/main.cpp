#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<std::string> a;
    std::cout << a.to_string() << "\n";
    a.insert_back("lunes");
    a.insert_back("martes");
    a.insert_back("miércoles");
    std::cout << a.to_string() << "\n";

    LinkedList<int> b {4, 8, 15, 16, 23, 42};
    std::cout << b.remove_front() << "\n";
    std::cout << b.remove_front() << "\n";
    std::cout << b.remove_front() << "\n";
    std::cout << b.to_string() << "\n";
    std::cout << b.size() << "\n";

    return 0;
}
