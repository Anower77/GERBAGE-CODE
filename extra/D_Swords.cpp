#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


ll gcd(ll a, ll b)
{
	while(b)
	{
		ll x=b;
		b = a% b;
		a = x;
	}
	return a;
}



void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll mx = *max_element(a.begin(), a.end());
	
	vector<ll> diff(n);
	for(int i=0; i<n; i++)
	{
		diff[i] = mx - a[i];
	}


	ll Gcd = 0;
	for(int i=0; i<n; i++)
	{
		Gcd = gcd(Gcd, diff[i]);
	}


	ll x=0;
	for(int i=0; i<n; i++)
	{
		x += diff[i] / Gcd;
	}

	cout<< x << " " << Gcd <<'\n';

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();

    }


    return 0;
}