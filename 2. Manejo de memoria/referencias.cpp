#include <iostream>

void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

void swap_ptr(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

void swap_ref(int& x, int& y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int a = 13;
    int b = 6;
    std::cout << "a = " << a << ", b = " << b << "\n";
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";
    swap_ptr(&a, &b);
    std::cout << "a = " << a << ", b = " << b << "\n";
    swap_ref(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}
