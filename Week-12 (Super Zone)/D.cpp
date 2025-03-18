#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	set<ll> s;
	map<ll, vector<ll>> a;

	for(ll i=0; i<n; i++)
	{
		ll x; cin>>x;
		s.insert(x);
		a[x].push_back(i);
	} 


	if((ll)s.size() ==1)
	{
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	vector<vector<ll>> v;

	for(auto& i: a) v.push_back(i.second);

	for(int i=1; i<v.size(); i++)
	{
		for(auto j: v[i]) 
		{
			cout<< v[0][0]+1 << " " << j+1<<'\n';
		}
	}


	for(int i=1; i<v[0].size(); i++)
	{
		cout<< v[0][i]+1 << " " << v[1][0]+1<<'\n';
	}

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