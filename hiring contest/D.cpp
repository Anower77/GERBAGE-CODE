#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	string s; cin>>s;
	vector<ll> v;
	ll i = 0;

	while(i< s.size())
	{
		if(s[i]=='1')
		{
			ll j = i;
			while(j<s.size() and s[j] == '1') j++;
			
			v.push_back(j-i);
			i=j;
		}
		else
		{
			i++;
		}
	}


	sort(v.rbegin(), v.rend());
	ll zaza =0;
	for(ll k=0; k<v.size(); k+=2)
	{
		 zaza+=v[k];
	}
	cout<< zaza <<'\n';
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