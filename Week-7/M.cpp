#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve() 
{
    ll n, m; cin>>n>> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];


    map<ll, ll> freq;

    for (int i = 0; i < m; i++) 
    {
        if (freq[b[i]]) continue;

        ll j = b[i];

        for (int k = 0; k < n; k++) 
        {
            ll p = pow(2, j);
            if (a[k] % p == 0) {
                ll x = pow(2, j - 1);
                a[k] += x;
            }
        }

        freq[b[i]] = 1;
    }

    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}



int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
