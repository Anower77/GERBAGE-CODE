#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n,m; cin>>n>>m;
	vector<ll> a(n), b(n);

	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];

	map<ll,ll> mp;
	for(int i=0;i<n; i++)
	{
		ll rem = a[i]%m;
		mp[rem]++;
	}	

	ll w=0;
	for(int i=0; i<n; i++)
	{
		ll rm= (m - b[i] % m) % m;
		if(mp.find(rm) != mp.end())
		{
			w += mp[rm];
		}
	}

	cout<< w << '\n';
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