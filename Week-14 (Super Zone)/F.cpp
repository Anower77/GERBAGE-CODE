#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 2e6+20;

ll n,m; 
vector<ll> a(N), b(N), c(N);

bool cmp(ll i, ll j)
{
	return a[i]<a[j];
}


void solve()
{
	cin>>n>>m;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	for(int i=0; i<m; i++) cin>>c[i];

	sort(a.begin(), a.end(), cmp);
	
	vector<pair<ll,ll>> v;
	for(int i=0; i<n; i++)
	{
		ll 
	}





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