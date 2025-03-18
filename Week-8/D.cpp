#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k; cin>>n>>k;
	vector<ll> a;

	for(ll i=1; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			a.push_back(i);
			if(i != n/i)
			{
				a.push_back(n/i);
			}
		}
	}

	sort(a.begin(), a.end());

	if(a.size() < k)
	{
		cout<< -1 <<'\n';
	}
	else
	{
		cout<< a[k-1] << '\n';		
	}
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();

    }


    return 0;
}