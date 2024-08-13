#include <iostream>
#include "dinoset.h"

int main()
{
    DinoSet a;
    a.add(DinoId::velociraptor);
    a.add(DinoId::pteranodon);
    std::cout << a.to_string() << "\n";
    return 0;
}
