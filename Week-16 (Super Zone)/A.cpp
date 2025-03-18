#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	vector<ll> a(n), freq(200005, 0);
	for(int i=0; i<n; i++) cin>>a[i];

	ll mx=INT_MIN;
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			ll sum = a[i]+a[j];
			freq[sum]++;
			mx = max(mx, freq[sum]);
		}
	}

	cout<< mx <<'\n';
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