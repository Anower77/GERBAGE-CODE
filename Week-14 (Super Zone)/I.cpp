#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	map<ll,ll> freq;
	for(int i=0; i<n; i++) freq[a[i]]++;

	ll ans=0, c=0;
	sort(a.begin(), a.end());
	for(int i=0; i<n; i++)
	{
		c++;
		if(i==n-1 or a[i+1] != a[i])
		{
			ans += ((c*(c - 1LL))/2LL);
			c=0;
		}

		for(int j=1; ;j++)
		{
			ll sh = a[i] * (1LL<<j);
			if(sh > a[n-1]) break;
			if(!freq[sh]) continue;
			if(sh-a[i] == j)
			{
				ans+=freq[sh];
			}
		}
	}	

	cout<< ans <<'\n';
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