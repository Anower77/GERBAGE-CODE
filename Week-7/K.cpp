#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;
const ll mod = 1000000007;

ll power(ll a, ll b)
{
	ll res =1;
	while(b>0)
	{
		if(b & 1)
		{
			res = (res*a) % mod;
		}

		// 5 = 5*5;
		a = (a*a) % mod;
		b >>= 1;
	}

	return res;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	ll n,k; cin>>n>>k;

    	ll ans=0;
    	for(int i=0; i<64; i++)
    	{
    		if(((ll)1 << i) & k) 
    		{
    			ans = (ans + power(n,i)) % mod;
    		}
    	} 

    	cout<< ans << '\n';
    }


    return 0;
}