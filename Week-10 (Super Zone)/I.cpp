#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long 
#define pi pair<ll,ll> 
using namespace std;
const ll N = 1e5+5;

template <typename T> 
using PBDS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    ll n; cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];


    vector<ll> lc(n,0);
    vector<ll> rc(n,0);
    
    PBDS<pair<ll,ll>> l;

    for(int i=0; i<n; i++) 
    {
        lc[i] = l.size() - l.order_of_key({a[i], i});
        l.insert({a[i], i});
    }

    l.clear();

    PBDS<pair<ll,ll>> r;
    for(int i=n-1; i>=0; i--) 
    {
        rc[i] = r.order_of_key({a[i], i});
        r.insert({a[i], i});
    }


    ll w=0;
    for(int i=0; i<n; i++)
    {
       w += lc[i] * rc[i];
    }

    cout<< w << '\n';


    
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