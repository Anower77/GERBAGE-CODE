#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{

	ll x,y,k; cin>>x>>y>>k;
	while(x>1)
	{
		ll p= y-(x%y);
		if(p>=k)
		{
			x += k, k=0;
		}
		else
		{
			k -= p, x += p;
		}

		while(x%y==0) x = x/y;
		if(k<=0) break;
	}

	if(k>0)
	{
		k = (k%(y-1));
		x += k;
		while(x%y==0) x = x/y;
	}

	cout<< x <<'\n';
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