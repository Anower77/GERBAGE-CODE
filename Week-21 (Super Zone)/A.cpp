#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	string s= "aeiou";
	ll n; cin>>n;
	ll ok = n/5;
	vector<char> v;

	for(int i=1; i<=ok; i++)
	{
		for(int j=0; j<5; j++) v.push_back(s[j]);
	}

	ll left= n%5;
	if(left != 0)
	{
		for(int i=0; i<left; i++) v.push_back(s[i]);
	}

	sort(v.begin(), v.end());
	for(auto x:v) cout<<x;
	cout<<'\n';
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}