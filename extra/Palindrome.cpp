#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cctype>
using namespace std;

int minimalCostToPalindrome(string s) {
    unordered_map<char, int> freq;

    // Count frequency of each character (case-insensitive)
    for (char c : s) {
        freq[tolower(c)]++;
    }

    int odd_count = 0;
    for (const auto& p : freq) {
        if (p.second % 2 != 0) {
            odd_count++;
        }
    }

    // Minimum changes needed if odd_count > 1
    // Only one character can have an odd count in a valid palindrome
    int change_cost = max(0, odd_count - 1);
    return change_cost;
}

int main() {
    int T;
    cin >> T;
    vector<int> results(T);

    for (int i = 0; i < T; ++i) {
        int n;
        string s;
        cin >> n >> s;

        results[i] = minimalCostToPalindrome(s);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
