#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	map<ll,ll> mp;
	vector<ll> a(n);

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		mp[a[i] % 10]++;
	}


	bool ok = false;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			for(int k=0; k<10; k++)
			{

				if(mp[i]>0 and mp[j]>0 and mp[k]>0)
				{

					mp[i]--;
					mp[j]--;
					mp[k]--;

					if(mp[i]>=0 and mp[j]>=0 and mp[k]>=0)
					{
						ll sum = i+j+k;
						if(sum%10 == 3) ok = true;
					}

					mp[i]++;
					mp[j]++;
					mp[k]++;
					if(ok) break;
				}
			}
		}
	}

	if(ok) cout<<"YES\n";
	else cout<<"NO\n";
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