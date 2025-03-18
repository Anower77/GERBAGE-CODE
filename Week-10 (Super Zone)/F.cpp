#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	map<tuple<ll,ll,ll>, ll> freq;
	ll ans=0;

	for(int i=0; i<n-2; i++)
	{
		tuple<ll,ll,ll> t = make_tuple(a[i],a[i+1],a[i+2]);
		vector<tuple<ll,ll,ll>> m(3);

		m[0] = make_tuple(0, a[i+1], a[i+2]);
		m[1] = make_tuple(a[i], 0, a[i+2]);
		m[2] = make_tuple(a[i], a[i+1], 0);

		for(auto tt:m)
		{
			ans += freq[tt]-freq[t];
			freq[tt]++;
		}

		freq[t]++;

	}

	cout<<ans<<'\n';
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