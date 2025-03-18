#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e18;



void solve()
{
	string s; cin>>s;
	ll ans = 1e9;

	for(ll i=1LL; i<=N; i*=2)
	{
		string p = to_string(i);
		ll cm=0;

		for(ll j=0; j<s.size(); j++)
		{
			if(cm<p.size() and s[j]==p[cm]) cm++;
		}

		ll oper = s.size() + p.size() - 2*cm;
		ans = min(ans, oper);
	}
	cout<< ans <<'\n';
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