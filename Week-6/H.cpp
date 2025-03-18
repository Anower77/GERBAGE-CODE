#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with.stdio(false);
    cin.tie(NULL);

	map<ll, ll> mp;
	for(int i=1; i<=10001; i++) mp[i*i*i]++;
   
    int t; cin>>t;
    while(t--)
    {
    	ll x,i,n=0; cin>>x;
    	// ll c = cbrt(x);

    	ll f =0;
    	for(int i=1; i<=10001; i++)
    	{
    		if(mp.find(x - i*i*i) != mp.end())
    		{
    			cout<<"YES\n";
    			n=1;
    			break;
    		}
    	}

    	if(n==0) cout<<"NO\n";

    }


    return 0;
}