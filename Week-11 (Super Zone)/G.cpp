#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


bool cmp(string &a, string &b)
{
	return a.size()<b.size();
}


void solve()
{
	ll n; cin>>n;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	sort(a.begin(), a.end());
	map<pair<ll,ll>> freq;
	ll ans=0;

	for(auto s: a)
	{
		ll n= s.size();
		for(ll m=1; m<=n; m++)
		{
			if((n+m)%2 != 0) continue;
			ll mid = (m+n)/2;
			ll req=0;
			
			for(ll i=0; i<mid; i++) req += (s[i]-'0');
			for(ll i=mid; i<n; i++) req -= (s[i]-'0');
			
			if(req>=0) ans+=freq[{m, req}];
		}

		reverse(s.begin(), s.end());
		for(ll m=1; m<=n; m++)
		{
			if((n+m)%2 != 0) continue;
			ll mid = (m+n)/2;
			ll req=0;

			for(ll i=0; i<mid; i++) req += (s[i]-'0');
			for(ll i=mid; i<n; i++) req -= (s[i]-'0');
			
			if(req>=0) ans+=freq[{m, req}];
		}

		ll sum=0;
		for(ll i=0; i<n; i++) sum += (s[i]-'0');
		freq[{n,sum}]++;
	}

	cout<<ans<<'\n';	

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