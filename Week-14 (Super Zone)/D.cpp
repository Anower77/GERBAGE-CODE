#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	string a,b; cin>>a>>b;
	ll mx = INT_MAX;

	for(int i=0; i<(ll)b.size(); i++)
	{
		ll x=0, y=i;
		while(x < (ll)a.size() and y<(ll)b.size())
		{
			if(a[x]==b[y]) y++;
			x++;
		}
		mx = min(mx, i+ (ll)b.size()-y);
	}

	cout<< (ll)a.size()+mx <<'\n';
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