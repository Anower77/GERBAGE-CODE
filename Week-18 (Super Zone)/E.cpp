#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	string s1, s2; cin>>s1>>s2;
	ll n1 = s1.size(), n2 = s2.size();
	//        4 * 2         4   2 = 4
	ll lcm = (n1*n2)/__gcd(n1, n2);
	string r1="", r2="";

	for(int i=0; i<lcm/n1; i++) r1+=s1;
	for(int i=0; i<lcm/n2; i++) r2+=s2;

	if(r1==r2) cout<< r1 <<'\n';
	else cout<<-1<<'\n';
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}