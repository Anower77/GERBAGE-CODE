#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	ll a[n+3];
	for(int i=0; i<n; i++) cin>>a[i];	

	if(a[0] == a[n-1]) cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		cout<<a[0]<<' ';
		for(int i=n-1; i>0; i--) cout<<a[i]<<" ";
		cout<<'\n';
	}
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}