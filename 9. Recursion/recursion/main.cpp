#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a {4, 8, 15, 16, 23, 42};
    IntList b;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "first(a) = " << first(a) << "\n";
    std::cout << "rest(a) = " << rest(a) << "\n";
    std::cout << "first(rest(a)) = " << first(rest(a)) << "\n";
    std::cout << "first(rest(rest(a))) = " << first(rest(rest(a))) << "\n";
    std::cout << "cons(108, a) = " << cons(108, a) << "\n";
    std::cout << "is_empty(a) = " << is_empty(a) << "\n";
    std::cout << "is_empty(b) = " << is_empty(b) << "\n";
    std::cout << "size(a) = " << size(a) << "\n";
    std::cout << "cons_end(108, a) = " << cons_end(108, a) << "\n";
    std::cout << "sum(a) = " << sum(a) << "\n";
    std::cout << "duplicate(a) = " << duplicate(a) << "\n";
    std::cout << "last(a) = " << last(a) << "\n";
    return 0;
}
