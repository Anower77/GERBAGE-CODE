#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) 
            cin >> arr[i];

        unordered_map<int,int> freq;
        for(int stick : arr) 
            freq[stick]++;

        int mxPloy = 0;
        for(auto& pair: freq) {
            mxPloy = max(mxPloy, min(pair.second / 2, 4));
        }
        cout << mxPloy << '\n';
    }

    return 0;
}
