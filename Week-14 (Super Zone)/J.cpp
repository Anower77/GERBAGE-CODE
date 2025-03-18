#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	vector<ll> a(n), b(n);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];

	vector<pair<ll,ll>> dx(n);
	
	for(int i=0; i<n; i++)
	{
		dx[i] = {a[i]-b[i], i};
	}


	sort(dx.begin(), dx.end());
	set<ll> s;
	ll mx = dx[n-1].first;

	for(int i=n-1; i>=0; i--)
	{
		if(dx[i].first == mx)
		{
			s.insert(dx[i].second+1);
		}
		else break;

	}

	cout<< s.size() <<'\n';
	for(auto i:s) cout<< i << ' ';
	cout<<'\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}