// Ejemplo básico de apuntadores

#include <iostream>

int main()
{
    int x = 5;
    int *p = &x;

    x++;
    (*p)++;
    std::cout << x << "\n";

    return 0;
}