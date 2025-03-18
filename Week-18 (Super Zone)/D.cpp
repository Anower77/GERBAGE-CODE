#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	int n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll extra=0;
	for(int i=0; i<n; i++)
	{
		if(a[i] >= i) 
		{
			extra += (a[i]-i);
			// cout<<a[i]<<" ";
			// cout<<'\n';
		}
		else if(a[i]+extra >= i) 
		{
			extra -= (i-a[i]);
			// cout<<a[i]<<" ";
			// cout<<'\n';
		}
		else 
		{
			cout<<"NO\n";
			return;
		}
		// cout<<a[i]<<" ";
	}

	cout<<"YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}