#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k,q; cin>>n>>k>>q;
	vector<ll> a(k), b(k);
	for(int i=0; i<k; i++) cin>>a[i];
	for(int i=0; i<k; i++) cin>>b[i];

	for(int i=0; i<q; i++)
	{
		ll x; cin>>x;
		auto it = lower_bound(a.begin(), a.end(), x) - a.begin();
		it--;

		if(it == -1)
		{
			ll d = a[0];
			ll t = b[0];
			cout<< (x*t)/d <<' ';
		}
		else
		{
			ll d = a[it+1]-a[it];
			ll t = b[it+1]-b[it];
			cout<< ((x-a[it])*t)/d+b[it] <<" ";
		}
	}

	cout<<'\n';
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

    // t - 0(q*log(q))
    return 0;
}