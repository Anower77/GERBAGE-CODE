#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	vector<ll> a(n, 0);


	if(n&1)
	{
		for(ll i=1,j=1; i<n; i+=2,j++) a[i]=j;
		for(ll i=2,j=1; i<n; i+=2,j++) a[i]=j;

	}
	else
	{
		for(ll i=0,j=1; i<n; i+=2,j++) a[i]=j;
		for(ll i=1,j=1; i<n; i+=2,j++) a[i]=j;
	}


	if(((n+1)/2) & 1)
	{
		for(ll i=0; i+2<n; i+=2) a[i] |= (1LL<<30);
		for(ll i=2; i<n; i+=2) a[i] |= (1LL<<29);
	}
	else
	{
		for(ll i=0; i<n; i+=2) a[i] |= (1LL<<30);
	}

	for(auto x:a) cout<<x<<" ";
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