#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n,x; cin>>n;
	map<ll,ll> freq;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		freq[x]++;
	}

	ll c1=0, c2=0;
	for(auto it: freq)
	{
		if(it.second>1)
		{
			c1++,c2++;
		}
		else
		{
			if(c1>c2) c2++;
			else c1++;
		}
	} 
	c2++;
	cout<< min(c1,c2) << '\n';
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