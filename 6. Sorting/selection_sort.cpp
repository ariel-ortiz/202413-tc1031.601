#include <iostream>
#include <utility>
#include <vector>

// Time complexity: O(N^2)
void selection_sort(std::vector<int>& data)
{
    for (int i = 0; i < data.size() - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < data.size(); j++) {
            if (data.at(j) < data.at(min_index)) {
                min_index = j;
            }
        }
        std::swap(data.at(i), data.at(min_index));
    }
}


int main()
{
    std::vector<int> v { 23, 8, 15, 4, 42, 16 };
    selection_sort(v);
    for (int elem : v) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
    return 0;
}

