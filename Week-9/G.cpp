#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll a,b; cin>>a>>b;

	if(a>b) swap(a,b);
	if((2*a) >= b and (a+b)%3 == 0) cout<<"YES";
	else cout<<"NO";
	cout<<'\n';

}



int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	ll t; cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}