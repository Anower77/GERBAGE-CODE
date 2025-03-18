#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,q; cin>>n>>q;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	vector<ll> b(n+1);
	while(q--)
	{
		ll l,r; cin>>l>>r;
		l--,r--;
		b[l]++;
		if(r+1 < n) b[r+1]--;
	}

	for(int i=1; i<n; i++)
	{
		b[i] += b[i-1];
	}

	b.resize(n);
	
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());

	ll ans=0;
	for(int i=0; i<n; i++)
	{
		ans += (1LL * a[i]*b[i]);
	}

	cout<<ans<<'\n';
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();
    }


    return 0;
}