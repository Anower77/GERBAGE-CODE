#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long 
using namespace std;
const ll N = 1e5+5;

template <typename T> 
using PDBS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

	ll ans=0;
    PDBS<int> p;

    for(int i=n-1; i>=0; i--)
    {
        ans += p.order_of_key(a[i]);
        p.insert(a[i]);
    }

    cout<< ans <<'\n';

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}