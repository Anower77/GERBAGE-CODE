#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n,k; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	for(int i=0; i<n; i++)
	{
		if(a[i]==1) a[i]++;
	}

	for(int i=0; i<n-1; i++)
	{
		if(a[i+1]%a[i]==0) a[i+1]++;
	}

	for(ll x:a) cout<<x<<" ";
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