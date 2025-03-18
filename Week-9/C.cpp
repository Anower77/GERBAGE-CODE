#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,m; cin>>n>>m;
	multiset<ll> ticket;
	vector<ll> a(m);

	for(int i=0; i<n; i++)
	{
		ll p; cin>>p;
		ticket.insert(p);
	}


	for(int i=0; i<m; i++) cin>>a[i];
	for(int i=0; i<m; i++)
	{
		auto it = ticket.upper_bound(a[i]);
		if(it==ticket.begin())
		{
			cout<<-1<<'\n';
		}
		else
		{
			it--;
			cout<<*it<<'\n';
			ticket.erase(it);
		}
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