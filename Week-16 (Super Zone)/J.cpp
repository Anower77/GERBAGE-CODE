#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,m,k; cin>>n>>m>>k;
	string s; cin>>s;

	ll i = -1;
	while(i < n)
	{
		while(i>=0 and i<n and s[i]=='W')
		{
			i++,k--;
			if(k<0)
			{
				cout<<"NO\n";
				return;
			}
		}

		if(s[i] == 'C')
		{
			cout<< "NO\n";
			return;
		}

		bool ok = false;
		for(ll j=m; j>=1; j--)
		{
			if(i+j >= n)
			{
				cout<< "YES\n";
				return;
			}

			if(s[i+j] == 'L')
			{
				i+=j;
				ok=true;
				break;
			}
		}

		if(ok) continue;
		for(ll j=m; j>=1; j--)
		{
			if(s[i+j] == 'W')
			{
				i+=j;
				ok=true;
				break;
			}
		}

		if(ok) continue;
		cout<< "NO\n";
		return;
	}
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