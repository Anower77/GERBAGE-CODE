#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	vector<pair<ll,ll>> a;
	for(int i=0; i<n; i++)
	{
		ll s,e; cin>>s>>e;
		a.push_back({s, 1});
		a.push_back({e, -1});
	}

	sort(a.begin(), a.end());
	ll ac=0, mc=0;
	for(int i=0; i<a.size(); i++)
	{
		ac += a[i].second;
		mc = max(mc, ac);
	}

	cout<< mc <<'\n';
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