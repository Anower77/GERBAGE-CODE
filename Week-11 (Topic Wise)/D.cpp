#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	string s; cin>>s;

	vector<ll> a(n+1,0);
	for(int i=0; i<n; i++)
	{
		if(s[i]=='1') a[i+1]=2;
	} 

	ll ans=0;


	for(ll i=1; i<=n; i++)
	{
		for(ll j=i; j<=n; j+=i)
		{
			if(a[j]==0)
			{
				a[j]=1;
				ans+=i;
			}
			else if(a[j]==2)
			{
				break;
			}
		}
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