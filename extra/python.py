#include "bits/stdc++.h"
#define ll long long 
#define pll pair<ll,ll> 
using namespace std;
const ll INF = 1e18;

vector<ll> dijkstra(ll n, vector<ll>& a)
{
	vector<ll> dis(n, INF);

	 for (ll u = 0; u < n; u++) 
	 {
        for (ll v = u + 1; v < n; v++) 
        {
            ll weight = (v - u) * max(a[u], a[v]);
            adj[u].push_back({weight, v});
            adj[v].push_back({weight, u});
        }
    }
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    dis[0]=0;

    pq.push({0,0});

    while(!pq.empty())
    {
    	auto [d, u] = pq.top();
    	pq.pop();


    	if(d != dis[u]) continue;

    	for(auto &[weight,i]: adj[u])
    	{
    		if(dis[u] + weight < dis[i])
    		{
    			dis[i] = dis[u] + weight;
    			pq.push({dis[i],i});
    		}
   		}
   	}
 
	return dis;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	ll n; cin>>n;
    	vector<ll> a(n);
    	for(int i=0; i<n; i++) cin>>a[i];

    	vector<ll> diss = dijkstra(n,a);
    	cout<< diss[n-1] << '\n';

    }


    return 0;
}