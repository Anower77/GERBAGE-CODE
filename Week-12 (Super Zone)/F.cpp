#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll a,b; cin>>a>>b;
	map<ll,ll> mp;


	ll n;
	for(int i=1; i<=a; i++)
	{
		ll x; cin>>x;

		if(i==1) n=x;
		else n&=x;

		for(int j=0; j<31; j++)
		{
			if((x&(1<<j)) == 0) mp[j]++;
		}
	}


	for(int i=30; i>=0; i--)
	{
		if(mp[i] and mp[i]<=b)
		{
			b -= mp[i];
			n |= 1<<i;
		}
	}

	cout<< n << '\n';
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