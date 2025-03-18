#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k; cin>>n>>k;
	vector<ll> a(n);
	for (int i=0; i<n; i++) cin>>a[i];

	ll ans=0;
	for(int i=0; i<n; i++)
	{
		ans += (a[i]/k);
		a[i] %= k;
	}

	sort(a.begin(), a.end());
	ll l=0, r=n-1;

	while(l<r)
	{
		if(a[l] + a[r] >= k)
		{
			ans++, r--;
		}
		l++;
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