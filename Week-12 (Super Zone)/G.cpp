#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k; cin>>n>>k;
	string s; cin>>s;

	map<char, ll> mp;
	for(int i=0; i<n; i++) mp[s[i]]++;

	for(char i='a'; i<='z'; i++)
	{
		if(mp[i]>=k)
		{
			mp[i] -= k;
			k = 0;
		}
		else
		{
			k -= mp[i];
			mp[i] = 0;
		}
	}

	string ss = "";

	for(int i=n-1; i>=0; i--)
	{
		if(mp[s[i]] != 0)
		{
			ss += s[i];
			mp[s[i]]--;
		}
	}

	reverse(ss.begin(), ss.end());
	cout << ss;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}