#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n,k; cin>>n>>k;
	string s; cin>>s;

	ll ans = 0;

	for(int i=0; i<k/2; i++)
	{
		ll cnt[26] = {};

		for(int st=0; st+k-1 < n; st+=k)
		{
			ll i1 = st+i;
			ll i2 = st+(k-1-i);

			cnt[s[i1] - 'a']++;
			cnt[s[i2] - 'a']++;
		}

		ll req = 2*(n/k);
		ll mx = *max_element(cnt, cnt+26);

		ans += req - mx;
	}


	if(k & 1)
	{
		ll cnt[26] = {};

		for(int i=k/2; i<n; i+=k)
		{
			cnt[s[i] - 'a']++;
		}

		ll req = n/k;
		ll mx = *max_element(cnt, cnt+26);

		ans  += req - mx;
	}

	cout<< ans << '\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}