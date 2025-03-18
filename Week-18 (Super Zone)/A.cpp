#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n), even, odd;
	for(int i=0; i<n; i++) 
	{
		cin>>a[i];
		if(a[i]%2 == 0) even.push_back(i+1); // collate even idx
		else odd.push_back(i+1); // collate odd idx
	}


	if(odd.size() >= 3) 
	{
		cout<< "YES\n";
		cout<< odd[0] << " " << odd[1] << " " << odd[2] <<'\n';
	}
	else if(even.size() >= 2 and odd.size() >= 1) 
	{
		cout<< "YES\n";
		cout<< even[0] << " " << even[1] << " " << odd[0] <<'\n';
	}
	else cout<< "NO\n";
	
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}