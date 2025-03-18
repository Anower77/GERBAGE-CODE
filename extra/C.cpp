#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    ll t; cin>>t;  
    while(t--)
    {
    	ll n,k; cin>>n>>k;
    	vector<ll> a(n);
    	for (ll i = 0; i < n; ++i) cin>>a[i];

    	ll add=0;
    	for(ll i=0; i<k; ++i)
    	{
    		if(a[i]%2 != 0) add++;
    	}

    	ll ans=0;
    	if(add>0) ans++;

    	for(ll i=k; i<n; ++i)
    	{
    		if(a[i-k] % 2 != 0) add--;
    		if(a[i] % 2 != 0) add++;
    		if(add > 0) ans++; 
    	}
    	cout<< ans <<'\n';

    }

    
    return 0;
}
