#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

bool add(ll x, ll y)
{
	return max(abs(x), abs(y)) <= y;
}


void solve()
{
	ll n; cin>>n;
	vector<pair<ll,ll>> a(n);
	for(int i=0; i<n; i++)
	{
		cin>>a[i].first >> a[i].second;
	}

	for(int i=0; i<n; i++)
	{
		ll x = a[i].first;
		ll y = a[i].second;
		
		if(add(x,y)) cout<<"YES\n";
		else cout<<"NO\n";
	}

}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t; cin>>t;
    // while(t--)
    {
    	solve();
    }


    return 0;
}







