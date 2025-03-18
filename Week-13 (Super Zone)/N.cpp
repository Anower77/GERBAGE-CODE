#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll x,n,m; cin>>x>>n>>m;
	ll flag=0;

	while((x>20) and (n>0))
	{
		x = x/2+10;
		n--;
	}

	while((x>0) and (m>0))
	{
		x = x-10;
		m--;
		if(x<=0)
		{
			flag=1; break;
		}
	}

	if(flag==1) cout<<"YES\n";
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