#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n; cin>>n;
	ll l=1, r=INT_MAX, ans=1;

	while(l <= r)
	{
		ll mid = (l+r)/2;

		ll k = (mid*(mid-1)/2);
		if(k<=n)
		{
			ans = max(ans, mid);
			l = mid + 1;
		}
		else
		{
			r = mid-1;
		}
	}

	ll k= ans*(ans-1)/2;
	cout<< ans + (n-k) << '\n';
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