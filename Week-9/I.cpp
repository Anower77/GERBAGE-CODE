#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 2e5+1;


void solve()
{
	ll n,x; cin>>n>>x;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll sum=0, cnt=0, i=0, j=0;
	while(i<n)
	{
		sum += a[i];
		while(sum>=x)
		{
			if(sum==x) cnt++;
			sum -= a[j];
			j++;
		}
		i++;
	}
	
	
	cout<<cnt<<'\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}