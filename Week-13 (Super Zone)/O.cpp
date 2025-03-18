#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll m,n; cin>>m>>n;
	vector<ll> a(n), b(n);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];

	ll ans=0, l=1, r= 1e12;
	
	while(l<=r)
	{
		ll mid = (l+r)/2;
		ll d=0;
		for(int i=0; i<n; i++)
		{
			ll at = (mid + b[i] -1)/b[i];
			d += (at * a[i]);
			
			if(d>=m) break;
		}

		if(d>=m)
		{
			ans=mid;
			r=mid-1;
		}
		else
		{
			l = mid+1;
		}
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