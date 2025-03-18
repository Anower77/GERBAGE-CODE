#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	string s; cin>>s;
	map<char, ll> mp;

	for(auto x:s) mp[x]++;

	ll u = mp['U'], d = mp['D'], l = mp['L'], r = mp['R'];
	ll mn1 = min(u, d);
	ll mn2 = min(l, r);


	if(mn1==0 and mn2==0)
	{
		cout<<0<<'\n';
		cout<<" "<<'\n';
	}
	else if(mn1==0)
	{
		cout<<2<<'\n'<<"LR"<<'\n';
	}
	else if(mn2==0)
	{
		cout<<2<<'\n'<<"UD"<<'\n';
	}
	else
	{
		string s="";
		for(ll i=0; i<mn1; i++) s+='U';
		for(ll i=0; i<mn2; i++) s+='R';
		
		s+=string(mn1, 'D');
		s+=string(mn2, 'L');

		cout<<s.size()<<'\n'<<s<<'\n';
	}


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