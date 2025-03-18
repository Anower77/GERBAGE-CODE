#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


vector<ll> prime(ll n)
{
	vector<ll> d;
	while(n%2 == 0)
	{
		d.push_back(2);
		n/=2;
	}

	for(ll i=3; i<=sqrt(n); i+=2)
	{
		while(n%i == 0)
		{
			d.push_back(i);
			n/=i;
		}
	}
	if(n>2) d.push_back(n);
	return d;
}



void solve()
{
	ll a,b; cin>>a>>b;
   	vector<ll> fac = prime(b);

   	bool ok = true;
   	for(ll it : fac)
   	{
   		if(a%it != 0)
   		{
   			ok=false;
   			break;
   		}
   	}



   	if(ok) cout<< "Yes\n";
   	else cout<< "No\n";
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	solve();    }


    return 0;
}