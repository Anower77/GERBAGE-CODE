#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	if(n==2 or n==3) cout<<"NO SOLUTION";
	else
	{
		for(ll i=2; i<=n; i+=2) cout<<i<<" ";
		for(ll i=1; i<=n; i+=2) cout<<i<<" ";
	}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}