#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve(ll tc) {
    ll n, k; cin>>n>>k;
    ll total_water = 0;
    for(int i=0; i<n; i++) {
        ll x, y; cin>>x>>y;
        ll cnt = 0; 
        for(int j=x; j<=k; j+=x) {
            cnt++;
        }
        total_water += cnt;
    }
    cout<< "Case "<< tc <<": " << total_water << '\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc=1; cin>>tc;
    // while(t--) solve();
    // int tc=1; cin>>tc;
    for(ll t=1; t<=tc; t++) {
        solve(t);
     // cout<< "Case" <<t<<":" << solve(t);
    }
    return 0;
}

