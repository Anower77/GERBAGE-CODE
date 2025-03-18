#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k; cin>>n>>k;

	ll sum1 = n*(n+1)/2;
	ll sum2 = 0;

	vector<ll> num;
	for(int i=0; i<n; i++)
	{
		ll cur; cin>>cur;
		num.push_back(cur);
		sum2 += cur;
	}

	num.push_back(sum1 - sum2);

	k = k % (n+1);
	for(int i=0; i<n; i++)
	{
		ll ans = num[(i-k+n+1) % (n+1)];
		cout<< ans << " ";
	}
	cout<<'\n';
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