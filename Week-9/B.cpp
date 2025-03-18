#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	int n,t; cin>>n>>t;
	vector<pair<ll,ll>> a(n);
	for(int i=0; i<n; i++)
	{
		cin>>a[i].first;
		a[i].second= i+1;
	}

	sort(a.begin(), a.end());

	for(int i=0; i<n; i++)
	{
		ll x = t - a[i].first;
		ll k = n-1;
		for(int j=i+1; j<k; j++)
		{
			while(j<k and a[j].first + a[k].first > x) k--;

			if(j<k and a[j].first + a[k].first == x)
			{
				cout<< a[i].second << " " << a[j].second << " " << a[k].second;
				return;
			}
		}
	}

	cout<< "IMPOSSIBLE\n";
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