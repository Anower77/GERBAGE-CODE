#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	map<ll,ll> freq;
	for(int i=1; i<=n; i++)
	{
		ll l,r; cin>>l>>r;
		freq[l]++;
		freq[r+1]--;

	}

	ll sum=0;
	bool ok =true;
	for(auto [idx, val]: freq)
	{
		sum += val;
		if(sum>2)
		{
			ok=false;
			break;
		}
	}


	if(ok) cout<<"YES\n";
	else cout<<"NO\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();
    }
    return 0;
}