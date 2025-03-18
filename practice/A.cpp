#include "bits/stdc++.h"
#define ll long long
using namespace std;
const ll N = 1e5+5;


void solve()
{
    ll x; cin>>x;
    ll e = x, c = 0;

    while(e > 1)
    {
        e = e/2;
        c++;
    }

    ll tmp = pow(2, c);
    cout<< x - tmp << " " << tmp << '\n';

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();
    return EXIT_SUCCESS;
}

