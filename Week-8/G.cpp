#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    ll res=1;

    vector<ll> a(n);
    map<ll,ll> freq;
    for(ll i=0; i<n; i++)
    {
    	cin>>a[i];
    	freq[a[i]]++;
    	if(a[i] != 1) res = max(res, freq[a[i]]);
    }

    if(n==1) cout<<1;
    else
    {
    	for(ll i=0; i<n; i++)
    	{
    		for(ll j=2; j<=sqrt(a[i]); j++)
    		{
    			if(a[i]%j == 0)
    			{
    				freq[j]++;
    				res= max(res, freq[j]);

    				if(a[i]/j != j)
    				{
    					freq[a[i] / j]++;
    					res = max(res, freq[a[i] / j]);
    				}
    			}
    		}
    	}
    	cout<<res;
    }

    return 0;
}