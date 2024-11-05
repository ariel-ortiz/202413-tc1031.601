#include <iostream>

int fact(int n)
{
    if (n <= 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main()
{
    std::cout << "fact(0) = " << fact(0) << "\n";
    std::cout << "fact(1) = " << fact(1) << "\n";
    std::cout << "fact(4) = " << fact(4) << "\n";
    std::cout << "fact(5) = " << fact(5) << "\n";
    std::cout << "fact(12) = " << fact(12) << "\n";
    std::cout << "fact(-1) = " << fact(-1) << "\n";
}