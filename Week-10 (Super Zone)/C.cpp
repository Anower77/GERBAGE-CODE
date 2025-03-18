#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	string s; cin>>s;
	ll n = s.size();

	cout<<3<<'\n';

	cout<<"L" << n-1 <<'\n';
	cout<<"R" << n-1 <<'\n';
	cout<<"R" << 2 * n-1 <<'\n';
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) solve();
    return 0;
}