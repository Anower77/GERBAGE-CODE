#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



bool solve(vector<ll>& a, ll n, ll k, ll v)
{
	ll need=0;
	for(int i=n/2; i<n; i++)
	{
		if(v>a[i]) need+= abs(a[i]-v);
		if(need>k) return false;
	}
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	 int n, k; cin>>n>>k;
    	 vector<ll> a(n);
    	for(int i=0; i<n; i++) cin>>a[i];

    	sort(a.begin(), a.end());
    	ll l=1, r=1e18, ans=0,;

    	while(l<=r)
    	{
    		ll mid = l+(r-l)/2;
    		if(solve(a, n, k, mid))
    		{
    			l=mid+1;
    			ans=mid;
    		}
    		else
    		{
    			r=mid-1;
    		}

    	}
    	cout<< ans <<'\n';
    }


    return 0;
}