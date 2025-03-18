#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k,d,w; cin>>n>>k>>d>>w;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll ans=0, rem=k, valid;
	for(int i=0; i<n; i++)
	{
		if(i==0 or valid<a[i] or rem<1)
		{
			ans++;
			rem=k;
			valid = a[i] + w + d;

		}
		rem--;
	}
	cout<< ans << '\n';
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