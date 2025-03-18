#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int count = 0;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] == a[i - 1] || a[i] == a[i + 1]) continue;
            ++count;
        }

        cout << ((count == 0) ? -1 : count) << endl;
    }

    return 0;
}
