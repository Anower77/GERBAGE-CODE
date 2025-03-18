#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;
 
 
void solve()
{
	ll y,x; cin>>y>>x;
	if(y>x)
	{
		if(y%2) cout << (y-1)*(y-1) + 1 + (x-1);
		else cout << y*y - (x-1);
	}
	else
	{
		if(x%2) cout << x*x - (y-1);
		else cout << (x-1)*(x-1) + 1 + (y-1);
	}
	cout<<'\n';
 
}
 
 
 
 
int main()
{
	ll t; cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}