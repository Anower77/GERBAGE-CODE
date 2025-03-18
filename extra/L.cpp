#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
       
        sort(a.begin(), a.end());

        vector<ll> v;
        map<ll, ll> mp;
        
        for (int i = 0; i < n; i++) 
        {
            ll x = 0;
            ll num = a[i];
            while (num > 0) 
            {
                x++;
                num /= 2;
            }
            mp[x]++;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        
        int y = mp[v[v.size() - 1]];
        cout << (y + 1) / 2 << '\n';
    }
    return 0;
}
