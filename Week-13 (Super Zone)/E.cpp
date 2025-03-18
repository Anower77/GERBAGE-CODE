#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll mod = 32768;
	ll n; cin>>n;
	
	vector<ll> a(n);
	for(int i=0; i<n; i++)
	{
		cin>>a[i];

		if(a[i]==0)
		{
			cout<<0<<" ";
			continue;
		}

		ll dd[16], ans=INT_MAX;

		for(int j=0; j<=15; j++)
		{
			ll x = a[i]+j;
			ll c=0;

			while(x%2==0) 
			{
				c++;
				x = x/2;
			}
			dd[i]=j+15-c;
			ans = min(ans, dd[i]);
		}

		cout<<ans<<" ";
	}
	cout<<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; //cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}