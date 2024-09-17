#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<std::string> lista { "lunes", "martes",
        "miércoles", "jueves" };
    lista.push_front("viernes");
    lista.push_front("sábado");
    lista.push_front("domingo");

    for (std::string elem : lista) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
    std::cout << lista.empty() << "\n";

    lista.reverse();
    for (std::string elem : lista) {
        std::cout << elem << " ";
    }

    std::cout << "\n";

    std::cout << lista.front() << "\n";
    lista.pop_front();
    std::cout << lista.front() << "\n";

    std::cout << "\n";

    return 0;
}
