#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a;
    a.reserve(3);

    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";

    a.push_back(4);

    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";

    a.push_back(8);

    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";

    a.push_back(15);

    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";

    a.push_back(16);

    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";

    a.push_back(23);

    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";

    a.push_back(42);

    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << "a.capacity() = " << a.capacity() << "\n";

    for (int elem : a) {
        std::cout << elem << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < a.size(); i++) {
        std::cout << i << ".- " << a[i] << "\n";
    }

    std::cout << "\n";

    return 0;
}