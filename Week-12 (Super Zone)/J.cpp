#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n, mn=INT_MAX, mx=INT_MIN; cin>>n;
	vector<ll> a;
	for(ll i=0; i<n; i++)
	{
		ll x; cin>>x;
		a.push_back(x);
		mn = min(mn, x);
		mx = max(mx, x);
	}

	ll p=0;
	for(ll i=0; i<n; i++)
	{
		p++;
		if(p == a[i]) p++;
	}
	cout<< p <<'\n';
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