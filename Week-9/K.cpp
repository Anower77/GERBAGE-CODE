#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 2e5+1;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll sum=0, cnt=0;
	map<ll,ll> freq;
	freq[0]++;
	for(int i=0; i<n; i++)
	{
		sum += a[i] % n;
		sum = (sum+n) % n;
		cnt += freq[sum];
		freq[sum]++;
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