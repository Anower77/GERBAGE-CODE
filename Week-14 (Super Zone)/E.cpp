#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n), b(n);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];

	ll ans1=0, ans2=0, cnt1=0, cnt2=0;
	
	for(int i=0; i<n; i++)
	{
		if((a[i]==0 and b[i]==-1) or (b[i]==0 and a[i]==-1)) continue;
		else if(a[i]==1 and b[i]<=0) ans1++;
		else if(b[i]==1 and a[i]<=0) ans2++;
		else if(a[i]==1 and b[i]==1) cnt1++;
		else if(a[i]==-1 and b[i]==-1) cnt2++;
	}

	while(cnt1-- > 0)
	{
		if(ans1 >= ans2) ans2++;
		else ans1++;
	}

	while(cnt2-- > 0)
	{
		if(ans1 >= ans2) ans1--;
		else ans2--;
	}

	cout<< min(ans1, ans2) << '\n';
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