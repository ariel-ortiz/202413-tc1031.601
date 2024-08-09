#include <iostream>
#include "fact.h"

int main()
{
    int x = 5;
    int r = factorial(x);

    std::cout << "El factorial de " << x << " es " << r << "\n";
    std::cout << "Fin de programa\n";
    return 0;
}
