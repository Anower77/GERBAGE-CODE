#include <iostream>
#include <vector>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

// Naive solution: O(n^2)
int naive_max_subarray_sum(const std::vector<int>& arr) {
    int max_sum = arr[0];
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        int current_sum = 0;
        for (int j = i; j < n; ++j) {
            current_sum += arr[j];
            max_sum = std::max(max_sum, current_sum);
        }
    }
    return max_sum;
}

// Optimized solution using Kadane's Algorithm: O(n)
int optimized_max_subarray_sum(const std::vector<int>& arr) {
    int max_sum = arr[0];
    int current_sum = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        current_sum = std::max(arr[i], current_sum + arr[i]);
        max_sum = std::max(max_sum, current_sum);
    }
    return max_sum;
}

// Stress test function
void stress_test() {
    srand(time(0)); // Seed the random number generator

    while (true) {
        // Generate random test data
        int n = rand() % 20 + 1; // Random size between 1 and 20
        std::vector<int> data(n);
        for (int i = 0; i < n; ++i) {
            data[i] = rand() % 201 - 100; // Random integers between -100 and 100
        }

        // Run both solutions
        int result_naive = naive_max_subarray_sum(data);
        int result_optimized = optimized_max_subarray_sum(data);

        // Compare results
        if (result_naive != result_optimized) {
            std::cout << "Mismatch found!" << std::endl;
            std::cout << "Data: ";
            for (int num : data) {
                std::cout << num << " ";
            }
            std::cout << "\nNaive Result: " << result_naive << std::endl;
            std::cout << "Optimized Result: " << result_optimized << std::endl;
            break;
        } else {
            std::cout << "
            t passed." << std::endl;
        }
    }
}

int main() {
    stress_test();
    return 0;
}
