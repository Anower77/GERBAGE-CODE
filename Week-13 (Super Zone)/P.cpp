#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n, x=0; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		x ^= a[i];
	}

	if(x==0) cout<<"YES\n";
	else
	{
		ll k=0, c=0;
		for(int i=0; i<n; i++)
		{
			k ^= a[i];
			if(k==x)
			{
				k=0; 
				c++;
			}
		}

		if(c>=2) cout<<"YES\n";
		else cout<<"NO\n";
	}
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}