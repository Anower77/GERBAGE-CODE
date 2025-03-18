#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n, mx_gcd=1, sum=0; 
	cin>>n;
	vector<ll> a(n,0), b(n,0);
	for(ll i=0; i<n; i++) cin>>a[i];


	b[0] = a[0];
	for(ll i=1; i<n; i++)
	{
		b[i] = a[i] + b[i-1];
	}


	sum = b[n-1];

	for(ll i=0; i<(n-1); i++)
	{
		mx_gcd = max(__gcd(b[i], sum-b[i]), mx_gcd)
	}
	
	cout<< mx_gcd <<'\n';
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	solve();

    }


    return 0;
}