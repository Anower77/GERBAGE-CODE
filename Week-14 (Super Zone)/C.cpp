#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	ll l,r; cin>>l>>r;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll sum=0, ans=0, start=0;
	
	for(int i=0; i<n; i++)
	{
		if(a[i]>r)
		{
			sum =0;
			start = i+1;
			continue;
		}

		sum += a[i];
		while(sum>r)
		{
			sum -= a[start];
			start++;
		}

		if(sum >= l and sum <= r)
		{
			ans++;
			sum=0;
			start=i+1;
		}
	}

	cout<< ans <<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}