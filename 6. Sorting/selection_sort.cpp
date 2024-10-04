#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>

void fill_random(std::vector<int>& values, int max_value)
{
    std::srand(0);
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = std::rand() % max_value;
    }
}

void fill_incremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
}

void fill_decremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = values.size() - 1; i >= 0; --i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
}

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

void print_vector(const std::vector<int> data)
{
    for (int elem : data) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> v(10'000);
    fill_random(v, 1000);
    //fill_incremental(v, 1000);
    //fill_decremental(v, 1000);
    std::cout << "Is sorted: " << std::is_sorted(v.begin(), v.end()) << "\n";
    // print_vector(v);

    auto start = std::chrono::high_resolution_clock::now();
    selection_sort(v);
    // std::sort(v.begin(), v.end());
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(
            stop - start);
    double total_time = duration.count() / 1'000'000.0;

    std::cout << "Is sorted: " << std::is_sorted(v.begin(), v.end()) << "\n";
    // print_vector(v);
    std::cout << "Time: " << total_time << " seconds\n";
    return 0;
}

