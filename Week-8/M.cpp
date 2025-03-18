#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll a,b,l; cin>>a>>b>>l;
	ll ans=0 ,x=0;

	if(a==b)
	{
		ll y=0;
		while(l%b==0)
		{
			l/=b;
			y++;
		}
		cout<<y+1<<'\n';
		return;
	}

	set<int> s;
	while(1)
	{
		int it = pow(a,x);
		if(it > l) break;
		if((l % it) != 0) break;
		
		ll cur=l/it;

		s.insert(cur);
		while(cur%b == 0)
		{
			cur/=b;
			s.insert(cur);
		}
		x++;
	}
	cout<<s.size()<<'\n';
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