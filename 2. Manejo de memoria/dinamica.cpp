#include <iostream>

int main()
{
    int n;
    std::cout << "Dame el valor de n: ";
    std::cin >> n;
    int *p = new int[n];
    int *q = new int;

    *q = 0;
    q[0] = 0;

    delete q;

    for (int i = 0; i < n; i++) {
        p[i] = i;
    }

    std::cout << p[2] << "\n";
    std::cout << *(p + 2) << "\n";
    std::cout << *(2 + p) << "\n";
    std::cout << 2[p] << "\n";

    delete [] p;
    return 0;
}
