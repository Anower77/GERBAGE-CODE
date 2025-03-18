#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n,k; cin>>n>>k;
	vector<ll> a(n);
	set<ll> s;

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}


	map<ll, pair<ll,ll>> mp;
	ll l=0, r=n-1, p=1;

	while(l<=r)
	{
		if(a[l]>=p and a[r]>=p)
		{
			mp[p] = {l,r};
			p++;
		}
		else if(a[l]<p) l++;
		else r--;
	}

	for(int i=1; i<k+1; i++)
	{
		if(s.find(i) == s.end())
		{
			cout<< 0 << " ";
		}
		else
		{
			cout<< 2*(mp[i].second - mp[i].first+1) << " ";
		}
	}
	cout<<'\n';
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