#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];


	ll mx=0, zero=0, one=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]==0)
		{
			mx += one;
			zero++;
		}
		else
		{
			one++;
		}
	} 


	// 0-->1
	ll cnt1=0, mx1=mx;
	for(int i=0; i<n; i++)
	{
		if(a[i]==0)
		{
			cnt1++;
			mx1 = max(mx1, mx + zero - cnt1);
		
		}
		
	}


	// 1-->0
	ll cnt0=0, mx2=mx;
	for(int i=0; i<n; i++)
	{
		if(a[i]==1)
		{
			cnt0++;
			mx2 = max(mx2, mx + one - cnt0);
		}
		
	}

	cout<< max({mx, mx1, mx2}) << '\n';
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