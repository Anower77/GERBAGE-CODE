#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	sort(a.begin(), a.end());
	
	ll x=0, y=1;
	ll diff = abs(a[y]-a[x]);
	for(int i=1; i<n-1; i++)
	{
		if(a[i+1] - a[i] < diff)
		{
			diff = abs(a[i+1]-a[i]);
			x = i;
			y = i+1;
		}
	}

	cout<< a[x] << " ";
	for(int i=y+1; i<n; i++)
	{
		cout<< a[i] << " ";
	}

	for(int i=0; i<x; i++)
	{
		cout<< a[i] << " ";
	}

	cout<< a[y] << '\n';


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