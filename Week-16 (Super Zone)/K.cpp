#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	bool ok = 1;
	ll mx = a[0];

	for(ll i=0; i<n; i++)
	{
		if(a[i] > (mx+1) or a[i]>i)
		{
			cout<<(i+1)<<'\n';
			ok=0;
			break;
		}

		if(a[i] > mx) mx=a[i];
	}

	if(ok==1) cout<<-1<<'\n';
	
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