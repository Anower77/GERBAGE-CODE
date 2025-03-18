#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long 
#define pi pair<ll,ll> 
using namespace std;
const ll N = 1e5+5;

template <typename T> 
using PDBS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    string r =s;
    reverse(r.begin(), r.end());

    map<char, vector<int>> ps,pr;
    for(int i=0; i<n; i++)
    {
        ps[s[i]].push_back(i);
        pr[r[i]].push_back(i);
    } 
    

    vector<int> per(n);
    for(char ch='a'; ch<='z'; ch++)
    {
        for(int i=0; i<ps[ch].size(); i++)
        {
            per[pr[ch][i]] = ps[ch][i];
        }
    }


    PDBS<int> p;
    ll ans=0;
    for(int i=n-1; i>=0; i--)
    {
        ans += p.order_of_key(per[i]);
        p.insert(per[i]);
    }

    cout<<ans<<'\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t; cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}