#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	set<ll> first, last, s;
	map<ll, ll> freq;

	for(int i=0; i<n; i++)
	{
		if(s.count(a[i]) == 0) first.insert(i);
		s.insert(a[i]);
		freq[a[i]] = i;
	}


	for(auto i: freq) last.insert(i.second);
	ll ans=0, c=0;


	for(int i=n-1; i>=0; i--)
	{
		if(last.count(i)) c++;
		if(first.count(i)) ans+=c;
	}

	cout<< ans <<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}