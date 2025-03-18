#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<pair<ll,ll>> p(n);

	for(int i=0; i<n; i++)
	{
		ll x; cin>>x;
		vector<ll> a(x);
		ll mx=-1;

		for(int j=0; j<x; j++)
		{
			cin>>a[j];
			mx = max(mx, a[j]-j+1);
		}
		p[i] = {mx,x};
	}

	sort(p.begin(), p.end());
	ll l= p[0].first, r= p[n-1].first;
	ll ans= INT_MAX;

	while(l<=r)
	{
		ll mid = (l+r)/2;
		ll cur = mid;
		bool ok=1;

		for(int i=0; i<n; i++)
		{
			if(cur >= p[i].first)
			{
				cur+=p[i].second;
			}
			else
			{
				ok=0; 
				break;
			}
		}

		if(ok)
		{
			ans=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	cout<< ans <<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}