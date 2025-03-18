#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll res=0;
	for(int i=1; i<n; i++)
	{
		if(a[i] >= a[i-1]) continue;
		
		res += abs(a[i]-a[i-1]);
		a[i] = a[i-1];
	}

	cout<<res;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}