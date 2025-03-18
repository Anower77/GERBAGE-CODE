#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve(ll n)
{
	ll a=1, b=n;

	for(ll i=1; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			ll x = n/i;

			if(__gcd(i, x) == 1)
			{
				if(max(i, x) < max(a, b))
				{
					a = i;
					b = x;
				}
			}
		}
	}

	cout<<a<<" "<<b<<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    solve(n);

    return 0;
}