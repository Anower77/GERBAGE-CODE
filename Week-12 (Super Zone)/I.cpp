#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
    ll n,m; cin>>n>>m;

    vector<vector<ll>> p(n, vector<ll>(m));
    vector<vector<ll>> r(n, vector<ll>(m, -1));
    multiset<pair<ll, ll>> s;

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            ll x; cin>>x;
            p[i][j] = x;
            s.insert({x, i});
        }
    }

    for(int i=0; i<m; i++)
    {
        auto it = s.begin();
        r[it->second][i] = it->first;
        s.erase(it);
    }

    while (!s.empty())
    {
        auto it = s.begin();
        ll row = it->second;
        for (int col=0; col<m; col++)
        {
            if (r[row][col] == -1)
            {
                r[row][col] = it->first;
                s.erase(it);
                break;
            }
        }
    }

    for (auto &row : r)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;  cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
