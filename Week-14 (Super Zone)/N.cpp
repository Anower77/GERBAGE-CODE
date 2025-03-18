#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,x; cin>>n;
	map<ll,ll> mp;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		x-=i;
		mp[x]++;
	}


	ll ans=0;
	for(auto it:mp)
	{
		ll a = it.second;
		ans += (a*(a-1))/2;
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