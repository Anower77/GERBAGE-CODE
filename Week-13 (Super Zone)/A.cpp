#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

bool solve(ll n, ll mid, vector<ll>& v, ll c, ll d)
{
	// if(n>mid)
	{
		ll t = d/(mid+1);
		ll x = d%(mid+1);
		ll sum=0;

		for(int i=0; i<=mid && i<n; i++) sum+=v[i];

		sum *= t;
		for(int i=0; i<x && i<n; i++) sum+=v[i];

		return sum>=c;
	}
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	ll n,c,d; cin>>n>>c>>d;
    	vector<ll> a(n);
    	for(int i=0; i<n; i++) cin>>a[i];

    	sort(a.rbegin(), a.rend());
    	
    	ll mx = a[0]*d;
    	if(c>mx) 
    	{
    		cout<<"Impossible\n";
    		continue;
    	}

    	ll mn = 0;
    	for(int i=0; i<min(n,d); i++) mn+=a[i];

    	if(mn>=c)
    	{
    	 	cout<<"Infinity\n";
    	 	continue;
    	}

    	ll h=d, l=0, ans=0;
    	while(h>=l)
    	{
    		ll mid=(l+h)/2;
    		if(solve(n,mid,a,c,d))
    		{
    			ans=mid;
    			l=mid+1;
    		}
    		else
    		{
    			h=mid-1;
    		}
    	}
    	cout<<ans<<'\n';
    }


    return 0;
}