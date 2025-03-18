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
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll ans=0;
	
	PDBS<pair<ll,ll>> p;
	for(int i=0; i<n; i++)
	{
		ans += i - p.order_of_key({a[i], -1});
		p.insert({a[i], i});
	}

	cout<< ans <<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}