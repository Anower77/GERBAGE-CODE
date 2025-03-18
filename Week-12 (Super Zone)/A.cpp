#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<set<ll>> a(n);
	set<ll> s;

	for(int i=0; i<n; i++)
	{
		ll k; cin>>k;
		for(int j=0; j<k; j++)
		{
			ll x; cin>>x;
			a[i].insert(x);
			s.insert(x);
		}
	}

	ll res=0;
	for(int i=1; i<=50; i++)
	{
		set<ll> ans;
		for(int j=0; j<n; j++)
		{
			if(a[j].find(i) == a[j].end()) 
			{
				ans.insert(a[j].begin(), a[j].end());				
			}
		}
		if(ans.size() != s.size()) res=max(res, (ll)ans.size());
	}
	cout<<res<<'\n';
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