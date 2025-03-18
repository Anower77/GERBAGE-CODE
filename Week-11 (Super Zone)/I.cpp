#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,k; cin>>n>>k;
	vector<ll> ans;
	ll x=n-k;
	ll a = (x+1)/2;
	ll b = x/2;

	ans.push_back(1);
	ans.push_back(n);


	ll k2 = k/2;
	for(int i=1; i<k/2; i++)
	{
		int ad, bd;
		if(a%k2 != 0)
		{
			ad = ((a/k2)+1);
			a -= ((a/k2)+1);
		}
		else
		{
			ad = (a/k2);
			a -= ((a/k2));
		}

		if(b%k2 != 0)
		{
			bd = ((b/k2)+1);
			b -= ((b/k2)+1);
		}
		else
		{
            bd =(b/k2);
            b -=((b/k2));
        }

		ans.push_back(ans[ans.size()-2]+ad+1);
		ans.push_back(ans[ans.size()-2]-(bd+1));
		k2--;
	}

	for(int i=k; i<n; i++)
	{
		if(i%2 == 0) ans.push_back(ans[i-k]+1);
		else ans.push_back(ans[i-k]-1);
	}

	cout<<ans<<'\n';
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