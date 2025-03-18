#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 200005;

void solve()
{
	ll n,k,q; cin>>n>>k>>q;
	vector<ll> a(N, 0), b(N, 0);

	for(int i=0; i<n; i++)
	{
		ll x,y; cin>>x>>y;
		a[x]++;
		if(y+1 < N) a[y+1]--;
	}


	for(int i=1; i<N; i++)
	{
		a[i] += a[i-1];
	}


	for(int i=1; i<N; i++)
	{
		if(a[i] >= k) b[i] = 1;
	}


	for(int i=1; i<N; i++)
	{
		b[i] += b[i-1];
	}

	while(q--)
	{
		ll x,y; cin>>x>>y;
		cout<<b[y]-b[x-1] << '\n';
	}
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