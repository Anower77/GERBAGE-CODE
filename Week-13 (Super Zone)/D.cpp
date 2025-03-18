#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k; cin>>n>>k;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	
	ll ans=0;
	for(int i=30; i>=0; i--)
	{
		ll req=0;
		for(int j=0; j<n; j++)
		{
			req += ((a[j] & (1<<i))==0);
		}

		if(req<=k)
		{
			k -= req;
			ans += (1<<i);
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