#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n,x; cin>>n>>x;
	vector<ll> a(n);

	for(int i=0; i<n; i++) cin>>a[i];
	vector<ll> ans(n+1, INT_MIN);
	
	ans[0]=0;
	for(int i=0; i<n; i++)
	{
		ll tmp =0;
		for(int j=i; j<n; j++)
		{
			tmp += a[j];
			ans[j-i+1] = max(ans[j-i+1], tmp);
		}
	}


	for(int i=0; i<=n; i++)
	{
		ll ans1=0;
		for(int j=0; j<=n; j++)
		{
			ans1=max(ans1, min(j,i)*x + ans[j]);
		}
		cout<< ans1 << " ";
	}
	cout<<'\n';
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