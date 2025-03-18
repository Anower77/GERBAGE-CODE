#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


ll solve(ll n,ll k)
{
	// ll n,k; cin>>n>>k;
	ll i=1, j=n;

	while(i<=j)
	{
		ll mid = (i+j)/2;
		ll x = mid * (mid+1)/2;
		ll ca = x-k;
		
		if(ca == (n-mid))
		{
			return ca;
		}
		else if(ca < (n-mid))
		{
			i = mid+1;
		}
		else
		{
			j = mid-1;
		}
	}
	return -1;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k; 
    cin>>n>>k;
    cout<<solve(n,k)<<'\n';


    return 0;
}