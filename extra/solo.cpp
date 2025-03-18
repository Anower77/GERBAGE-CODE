#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input values
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    // Initialize the sum
    long long total_sum = 0;

    // Iterate through all possible pairs (L, R)
    for (int L = 0; L < N - 1; ++L) {
        for (int R = L + 1; R < N; ++R) {
            // Find the second largest value among the elements in the range [L, R]
            int max1 = max(P[L], P[R]);
            int max2 = min(P[L], P[R]);
            for (int i = L + 1; i < R; ++i) {
                if (P[i] > max2 && P[i] < max1) {
                    max2 = P[i];
                }
            }
            // Add the second largest value to the total sum
            total_sum += max2;
        }
    }

    // Print the result
    cout << total_sum << endl;

    return 0;
}
