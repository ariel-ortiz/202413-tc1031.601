// Ejemplo de uso de diversas secciones de memoria.

#include <iostream>

int global_x = 42;
int global_y;

void funcion()
{

}

int main()
{
    int x = 5;
    char c = 'a';
    int *p = new int(7);

    std::cout << "x         = " << x << "\n";
    std::cout << "&x        = " << &x << "\n";
    std::cout << "c         = " << c << "\n";
    std::cout << "&c        = " << reinterpret_cast<void*>(&c) << "\n";
    std::cout << "global_x  = " << global_x << "\n";
    std::cout << "&global_x = " << &global_x << "\n";
    std::cout << "global_y  = " << global_y << "\n";
    std::cout << "&global_y = " << &global_y << "\n";
    std::cout << "&main     = " << reinterpret_cast<void*>(&main) << "\n";
    std::cout << "&funcion  = " << reinterpret_cast<void*>(&funcion) << "\n";
    std::cout << "p         = " << p << "\n";
    std::cout << "*p        = " << *p << "\n";
    std::cout << "&p        = " << &p << "\n";

    delete p;

    return 0;
}
