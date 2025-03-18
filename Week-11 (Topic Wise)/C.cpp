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


	vector<ll> pos, neg;

	for(ll i=0; i<n; i++)
	{
		ll diff= b[i]-a[i];
		if(diff>=0)
		{
			pos.push_back(diff);	
		}
		else
		{
			neg.push_back(diff);
			// ++rem;
		}
	}

	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end(), greater<ll>());
	
	ll idx=0, cnt=0;
	for(int i=0; i<neg.size(); i++)
	{
		while(idx < pos.size() and neg[i]+pos[idx] < 0)
		{
			idx++;
		}

		if(idx<pos.size() and neg[i]+pos[idx]>=0) 
		{
			cnt++;
			idx++;
		}
	}
	// cout<<j+(pos.size()-j)/2<<'\n';
	cnt += (pos.size()-cnt)/2;
	cout<< cnt <<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	solve();
    }

    return 0;
}