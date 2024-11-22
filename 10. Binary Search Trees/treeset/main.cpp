#include <iostream>
#include <vector>
#include "treeset.h"

void imprime_char(char c)
{
    std::cout << c << " ";
}

int suma = 0;

void suma_codigos(char c)
{
    suma += c;
}

int main()
{
    TreeSet<char> a;
    a.add('M');
    a.add('D');
    a.add('F');
    std::cout << "a.size() = " << a.size() << "\n";
    TreeSet<char> b {'M', 'D', 'F', 'A', 'Z'};
    std::cout << "b.size() = " << b.size() << "\n";
    b.inorder(imprime_char);
    std::cout << "\n";
    b.inorder(suma_codigos);
    std::cout << suma << "\n";
    return 0;
}
