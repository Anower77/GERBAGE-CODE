#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	string s; cin>>s;
	ll ans=n;

	for(int i=1; i<n; i++)
	{
		if(s[i] != s[i-1]) ans+=i;
	}
	cout<<ans<<'\n';
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