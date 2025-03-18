#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll sum = 0;
	ll cur = a[0];

	for(int i=0; i<n; i++)
	{
		if((a[i]>0 and cur>0) or (a[i]<0 and cur<0))
		{
			if(a[i]>cur) cur=a[i];
		}
		else
		{
			sum+=cur;
			cur=a[i];
		}
	}

	sum += cur;
	cout<<sum<<'\n';
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