#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long 
using namespace std;
using namespace __gnu_pbds;
const ll N = 1e5+5;

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;



bool same(ll n, vector<ll> a, vector<ll> b)
{
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for(ll i=0; i<n; i++)
	{
		if(a[i] != b[i]) return false;
	}
	return true;
}




void input(ll n, vector<ll>& a)
{
	a.resize(n);
	for(ll i=0; i<n; i++) cin>>a[i];
}



void solve()
{
	ll n; cin>>n;
	vector<ll> a;
	input(n, a);

	vector<ll> b;
	input(n, b);

	if(!same(n, a, b))
	{
		cout<< "NO\n";
		return;
	}

	map<ll, ll> mp;
	for(ll i=0; i<n; i++) mp[a[i]]=i;
	

	ordered_set s;
	ll ans=0;
	for(ll i=0; i<n; i++)
	{
		ll p = mp[b[i]];
		ll c = s.order_of_key(p);
		c = s.size() - c;
		s.insert(p);
		ans += (p - i + c);
	}

	cout<< (ans%2 == 0 ? "YES" : "NO") <<'\n';

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