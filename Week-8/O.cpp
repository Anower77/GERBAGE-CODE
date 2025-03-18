#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

ll prime(ll a)
{
	ll x=0;
	while(1)
	{
		x=0;
		for(int i=2; i*i<=a; i++)
		{
			if(a%i == 0)
			{
				x=1;
				break;
			}
		}
		if(x==0) break;
		else a++;
	}
	return a;
}


void solve()
{
	int n; cin>>n;
	ll ans=0;
	
	ll a = n+1;
	a = prime(a);

	ll b = a+n;
	b = prime(b);

	ans = a*n;
	cout<< ans <<'\n';
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