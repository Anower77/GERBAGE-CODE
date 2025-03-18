#include "bits/stdc++.h"
#define ll long long
using namespace std;
const ll N = 1e5+5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll s = 0;
        for (int i = 0; i < n; i++) cin >> arr[i];

        for (int i = 0; i < n; i++) 
        {
            s = s + arr[i];
            if (s < 0) s = 0;
        }
        cout << s << '\n';
    }

    return 0;
}
