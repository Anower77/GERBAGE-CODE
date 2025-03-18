#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	ll ans =0 ;
	
	for(int i=0; i<n; i++) 
	{
		cin>>a[i];
		ans+=a[i];
	}	

	map<ll,ll> freq;
	ll mx=0;

	for(int i=0; i<n; i++)
	{
		freq[a[i]]++;
		if(freq[a[i]] >= 2)
		{
			if(a[i] > mx) mx = a[i];
		}
		a[i] = mx;
	}


	freq.clear();
	for(int i=0; i<n; i++) freq[a[i]]++;

	ll p=0, d=0;
	for(int i=0; i<n; i++)
	{
		if(a[i] != p)
		{
			ans += a[i];
			if(freq[a[i]] == 1) ans+=(n-i-1) * d;
			else
			{
				ans += (n-i-1) * a[i];
				d = a[i];
			}
		}
	}

	cout<< ans << '\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}