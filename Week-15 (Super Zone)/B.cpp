#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,c,q; cin>>n>>c>>q;
	string s; cin>>s;

	vector<pair<ll,ll>> a(c), b(c);
	ll cur = n; 

	for(int i=0; i<c; i++)
	{
		ll l,r; cin>>l>>r;
		a[i] = {l,r};
		b[i] = {cur+1, cur+(r-l+1)};
		cur = b[i].second;
	}


	while(q--)
	{
		ll k; cin>>k;
		if(k<=n)
		{
			cout<<s[k-1]<<'\n';
			continue;
		}

		for(int i=c-1; i>=0; i--)
		{
			if(k>=b[i].first and k<=b[i].second)
			{
				k = (a[i].first) + (k-b[i].first);
				break;
			}
		}
		cout<< s[k-1] <<'\n';

	}
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