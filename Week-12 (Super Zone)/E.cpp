#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	map<ll,ll> mp;
	for(int i=0; i<n; i++)
	{
		ll x; cin>>x[i];
		mp[x]++;
	}

	priority_queue<ll> q;
	for(auto& i:mp) q.push(i.second);

	while(q.size()>=2)		
	{
		ll a=q.top();
		q.pop();
		ll b=q.top();
		q.pop();
		a--, b--;

		if(a) q.push(a);
		if(b) q.push(b);
	}


	if(q.size()==0) cout<< 0 <<'\n';
	else cout<<q.top() <<'\n';
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; cin>>t;
    while(t--)
    {
    	solve();
    }

    return 0;
}