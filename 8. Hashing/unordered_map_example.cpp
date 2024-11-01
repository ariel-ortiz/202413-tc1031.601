#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> nums;
    nums["one"] = 1;
    nums["two"] = 2;
    nums["twenty"] = 20;
    nums["six"] = 6;
    nums["two"] = 0;

    for (auto p : nums) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    std::unordered_map<int, int> squares;

    for (int i = 0; i <= 10; i++) {
        squares[i] = i * i;
    }

    for (auto p : squares) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    std::unordered_map<std::string, std::string> words {
        {"pollito", "chicken"},
        {"gallina", "hen"},
        {"lápiz", "pencil"},
        {"pluma", "pen"}
    };

    for (auto p : words) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}
