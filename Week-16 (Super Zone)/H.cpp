#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

ll go(vector<ll>&a, ll s, ll n)
{
	ll r = s;
	ll cur_sum=0;
	while(r < a.size())
	{
		cur_sum += a[r];
		if(cur_sum >= n) break;;
		r++;
	}
	return r;
}


void solve()
{
	ll n; cin>>n;
	vector<ll> a[3];
	for(int i=0; i<3; i++)
	{
		a[i].resize(n);
		for(int j=0; j<n; j++) cin>>a[i][j];
	}

	ll tot = accumulate(a[0].begin(), a[0].end(), 0ll);
	ll need = (tot+2)/3;

	vector<ll> order = {0,1,2};

	do{

		ll f = order[0];
		ll s = order[1];
		ll t = order[2];
	
		ll r1 = go(a[f], 0, need);
		ll r2 = go(a[s], r1+1, need);
		ll r3 = go(a[t], r2+1, need);
	
		if(r3 >= n) continue;

		vector<array<ll, 3>> ans = {{f, 0, r1}, {s, r1+1, r2}, {t, r2+1, r3}};
		sort(ans.begin(), ans.end());


		for(int i=0; i<3; i++)
		{
			cout<<ans[i][1]+1 << " " <<ans[i][2]+1<< " ";
		}
		cout<<'\n';
		return;

	}while(next_permutation(order.begin(), order.end()));

	cout<<"-1\n";
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