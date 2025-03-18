#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string x, y;
        cin >> x >> y;

        for (int j = 0; j < x.size(); ++j) {
            if (y[j] > x[j]) {
                swap(x[j], y[j]);
            }
        }

        cout << x << endl;
        cout << y << endl;
    }

    return 0;
}
