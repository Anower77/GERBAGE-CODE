#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

typedef long double Double;

struct dat {
	int i;
	Double x;
	dat(int i_, Double x_) {
		i = i_;
		x = x_;
	}

	bool operator<(const dat& d) const {
		return x < d.x;
	}
};

vector<dat> numbers;

void solve() {
    // Example of populating the numbers vector
    numbers.push_back(dat(1, 3.14));
    numbers.push_back(dat(2, 1.59));
    numbers.push_back(dat(3, 2.65));

    // Sorting the numbers based on the x value
    sort(numbers.begin(), numbers.end());

    // Printing sorted elements
    for (const auto& d : numbers) {
        cout << "i: " << d.i << ", x: " << d.x << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
