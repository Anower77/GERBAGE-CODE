#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,m; cin>>n>>m;
	vector<ll> a(m);
	for(int i=0; i<m; i++) cin>>a[i];
	sort(a.begin(), a.end());


	vector<ll> dif;
	for(int i=0; i<m-1; i++)
	{
		dif.push_back(a[i+1] - a[i]-1);
	}
	dif.push_back(a[0]+ n - a[m-1]-1);



	ll t=0, s=0;
	sort(dif.begin(), dif.end(), greater<ll>());


	for(int i=0; i<dif.size(); i++)
	{
		ll cur = dif[i];
		cur -= (t*2);

		if(cur<=0) break;
		s += (cur-1);
		if(cur==1) s++;
		t += 2;
	}

	cout<< n-s << '\n';
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