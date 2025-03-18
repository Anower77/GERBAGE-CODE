#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	int n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll cnt=0, x=a[n-1], i=n-1, s=0;
	while(i>=0)
	{
		while(a[i]==x and i>=0) cnt++, i--;
		if(i<0) break;
		s++;
		i-=cnt;
		cnt = cnt*2;
	}

	cout<< s <<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}