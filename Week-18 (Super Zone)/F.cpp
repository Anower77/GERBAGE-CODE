#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n, k; cin>>n>>k;
	if(n==k) cout<<"1\n";
	
	else if(n>k)
	{
		if(n%k == 0) cout<<"1\n";
		else cout<<"2\n";
	}
	else
	{
		ll z = k/n;
		if(k%n) z++;
		cout<< z <<'\n';
	}
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}