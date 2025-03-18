#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



ll solve(ll n, ll k)
{
	if(n==1) return 0;
	priority_queue<ll> pq;
	pq.push(n);

	ll ope = 0;
	while(!pq.empty())
	{
		ll u = pq.top();
		pq.pop();

		if(u==1) continue;
		ope++;

		ll p = u/k;
		ll rem = u%k;

		for(int i=0; i<k; i++)
		{
			if(i<rem)
			{
				pq.push(p+1);
			}
			else
			{
				pq.push(p);
			}
		}
	}
	return ope;
}






int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	ll n,k; cin>>n>>k;
    	cout<<solve(n,k)<<'\n';
    }


    return 0;
}