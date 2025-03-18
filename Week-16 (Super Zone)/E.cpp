#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;




void solve()
{
	ll n; cin>>n;
	vector<ll> a(n+1), v(n+1);
	for(ll i=1; i<=n; i++) cin>>a[i];

	if(a[1] != n)
	{
		cout<<"NO\n"; 
		return;
	}

	for(ll i=1; i<=n; i++)
	{
		v[a[i]]++;
	}

	for(ll i=n-1; i>=1; i--)
	{
		v[i] += v[i+1];
	}

	if(v==a) cout<<"YES\n";
	else cout<<"NO\n";
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