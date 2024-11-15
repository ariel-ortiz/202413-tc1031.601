#include <iostream>

int pasos = 0;

void hanoi(int n, char origin, char temp, char destiny)
{
    if (n == 1) {
        pasos++;
        std::cout << pasos << ".- Move disc 1 from " << origin << " to " << destiny << "\n";
        return;
    }

    hanoi(n - 1, origin, destiny, temp);
    pasos++;
    std::cout << pasos << ".- Move disc " << n << " from " << origin << " to " << destiny << "\n";
    hanoi(n - 1, temp, origin, destiny);
}

int main()
{
    hanoi(8, 'A', 'B', 'C');
}
