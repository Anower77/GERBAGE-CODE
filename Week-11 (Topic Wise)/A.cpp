#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	ll mx=0;
	for(int i=2; i<=(2*n); i++)
	{
		map<ll,ll> mp;
		for(int j=0; j<n; j++) mp[a[j]]++;

		ll p=0;
		for(int j=0; j<n; j++)
		{
			if(mp[a[j]] >0)
			{
				ll c = i-a[j];
				if(c>0 and mp[c]>0)
				{
					if(a[j]==c and mp[a[j]] <2) continue;
					p++;
					mp[a[j]]--;
					mp[c]--;
				}
			}
		}
	
		mx = max(mx, p);
	}

	cout<< mx <<'\n';
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