#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;





void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll gc1=0, gc2=0;
	for(int i=0; i<n; i++)
	{
		if(i%2 == 0)
		{
			gc1 = __gcd(gc1, a[i]);
		}
		else
		{
			gc2 = __gcd(gc2, a[i]);
		}
	}
	

	ll x=0, y=0;
	for(int i=1; i<n; i+=2)
	{
		if(a[i]%gc1 == 0)
		{
			x=1;
			break;
		}
	}
	
	for(int i=1; i<n; i+=2)
	{
		if(a[i]%gc2 == 0)
		{
			y=1;
			break;
		}
	}


	if(x==1 and y==1) cout<< 0 <<'\n';
	else if(x==0) cout<< gc1 <<'\n';
	else cout<< gc2 <<'\n';
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