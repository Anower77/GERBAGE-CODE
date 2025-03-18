#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n,x; cin>>n>>x;
	vector<ll> a(n);
	map<ll,ll> freq, x_freq;
	set<ll> s;

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		freq[a[i]]++;
		s.insert(a[i]);
	}

	if(n==1) 
	{
		cout<<-1<<'\n';
		return;
	}


	for(auto& en: freq)
	{
		if(en.second>1)
		{
			cout<<0<<'\n';
			return;
		}
	}

	
	ll mn = INT_MAX;
	for(int i=0; i<n; i++)
	{
		ll x_val = a[i] ^ x;
		if(s.count(x_val)) mn = min(mn, 1LL);
		x_freq[x_val]++;
	}


	for(auto& [x_val, cnt]:x_freq)
	{
		if(cnt>1) mn=min(mn, 2LL);
	}


	if(mn == INT_MAX) count<<-1<<'\n';
	else cout<<mn<<'\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t; cin>>t;
    // while(t--)
    {
    	solve();
    }


    return 0;
}