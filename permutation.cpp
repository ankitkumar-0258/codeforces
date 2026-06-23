#include <iostream>
#include <vector>
#include <algorithm> // Required for std::next_permutation and std::sort

int main() {
    std::vector<int> nums = {3, 1, 2};

    // 1. Sort the vector to start from the lexicographically smallest arrangement
    std::sort(nums.begin(), nums.end());

    std::cout << "All permutations:" << std::endl;

    // 2. Use do-while to print the first (sorted) version and then all subsequent ones
    do {
        std::cout << "[ ";
        for (int x : nums) {
            std::cout << x << " ";
        }
        std::cout << "]" << std::endl;
    } while (std::next_permutation(nums.begin(), nums.end()));

    return 0;
}