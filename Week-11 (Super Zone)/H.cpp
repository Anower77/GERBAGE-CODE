#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<string> v(n);
	for(auto &e: v) cin>>e;

	ll ans=0;
	vector<map<ll, ll>> mp(6);
	
	vector<pair<ll, string>> vs;
	for(auto e:v) vs.push_back({e.size(), e});

	sort(vs.begin(), vs.end());
	v.clear();


	for(auto e: vs) v.push_back(e.second);
	for(auto s:v)
	{
		ll t=0;
		for(auto d:s) t+=(d-'0');
	
		ll sz=s.size();
		ll len = sz + 2 - sz%2;

		for(ll i=len; i<=10; i+=2)
		{
			if(i > 2*sz) break;
			ll a=0,b=0;
			ll x = sz-i/2;

			for(ll j=0; i<x; j++)
			{
				a += s[j]-'0';
				b += s[sz-j-1]-'0';
			}

			ans += mp[i-sz][t-2*a];
			ans += mp[i-sz][t-2*b];
		}

		mp[sz][t]++;
		ans++;
	}

	cout<< ans <<'\n';

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();
    }


    return 0;
}