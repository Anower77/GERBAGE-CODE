#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);

	ll sum=0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i] >= 1) sum+=a[i];
	}


	ll ans=0, add=0;
	for(int i=0; i<n; i++)
	{
		if(i%2 == 0)
		{
			if(a[i] > 0)
			{
				add = max(add, sum);
				sum -= a[i];
			}
			else
			{
				add = max(add, sum+a[i]);
			}
		}
		else
		{
			if(a[i] >0)
			{
				sum -= a[i];
				add = max(add, sum);
			}
			else
			{
				add = max(add, sum);
			}
		}
	}

	ans += add;
	cout<< ans <<'\n';
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