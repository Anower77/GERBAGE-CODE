#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> v(n);
	for(ll i=0; i<n; i++) cin>>v[i];

	vector<ll> a(n,0), b(n,0);
	set<ll> s1, s2;
	bool ok = true;

	for(ll i=0; i<n; i++)
	{
		if(s1.find(v[i]) == s1.end())
		{
			s1.insert(v[i]);
			a[i]=v[i];
		}
		else if(s2.find(v[i]) == s2.end())
		{
			s2.insert(v[i]);
			b[i]=v[i];
		}
		else
		{
			ok=false;
			break;
		}
	}



	if(!ok)
	{
		cout<<"NO\n";
		return;
	}




	set<ll> ra,rb;
	for(ll i=1; i<=n; i++)
	{
		if(s1.find(i)==s1.end()) ra.insert(i);
		if(s2.find(i)==s2.end()) rb.insert(i);
	}


	for(ll i=0; i<n; i++)
	{
		if(a[i]==0)
		{
			auto it = ra.upper_bound(b[i]);
			if(it==ra.begin())
			{
				ok=false;
				break;
			}

			--it;
			a[i] =* it;
			ra.erase(it);
		}
	}


	if(ok)
	{
		// cout<<"YES\n";
		for(ll i=0; i<n; i++)
		{
			if(b[i]==0)
			{
				auto it= rb.upper_bound(a[i]);
				if(it==rb.begin())
				{
					ok=false;
					break;
				}
				--it;
				b[i] =*it;
				rb.erase(it);
			}
		}
	}
	
	if(ok)
	{
		cout<<"YES\n";
		for(ll i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<'\n';
		for(ll i=0; i<n; i++) cout<<b[i]<<" ";
		cout<<'\n';

	}
	else
	{
		cout<<"NO\n";
	}

}	





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}