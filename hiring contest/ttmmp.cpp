#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

bool isF(ll n)
{
	return (n & (n+1))==0;
}


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(ll i=0; i<n; i++) cin>>a[i];

	ll t=0;
	for(ll num : a) t |= num;

	if(isF(t))	
	{
		cout<< 0 <<'\n';
		return;
	}	


	set<ll> s;
	s.insert(0);

	for(ll num:a)
	{
		set<ll> ss;
		for(ll val: s)
		{
			ll nr = val | num;
			ss.insert(nr);

			if(isF(nr))
			{
				s = ss;
				break;
			}
		}
	}

	ll mr = n;
	for(ll val:s)
	{
		if(isF(val))
		{
			ll rc=0;
			for(ll i=0; i<n; i++)
			{
				if((val | a[i]) != val) rc++;
			}
			mr = min(mr, rc);
		}
	}

	cout<< mr << '\n';
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