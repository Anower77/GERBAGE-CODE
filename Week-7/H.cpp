#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	int n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];


	vector<ll> freq(n+2, 0);
	for(int i=0; i<n; i++)
	{
		if(a[i] > n) continue;
		freq[a[i]]++;
	}


	ll ans=0;
	for(int i=1; i<=n; i++)
	{
		ll h=0;
		for(int j=1; j*j<=i; j++)
		{
			if(i%j == 0)
			{
				h+=freq[j];
				if(j*j != i) h+=freq[i/j];
			}
		}

		ans = max(ans,h);
	}

cout<<ans<<'\n';




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