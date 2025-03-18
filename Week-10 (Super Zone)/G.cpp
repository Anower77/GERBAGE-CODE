#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	string t; cin>>t;
	ll x=0, y=0;


	for(auto a:t)
	{
		if(a=='N') y++;
		else if(a=='S') y--;
		else if(a=='W') x--;
		else x++;
	}


	if((abs(x)%2 == 1 or abs(y)%2 == 1) or (n==2 and x==0 and y==0))
	{
		cout<<"NO\n";
	}
	else
	{
		ll n=0, s=0, w=1, e=1;

		vector<char> a = {'R','H'};
		string ans="";

		for(auto c:t)
		{
			if(c=='N') ans+=a[n], n=1-n;
			else if(c=='S') ans+=a[s], s=1-s;
			else if(c=='W') ans+=a[w], w=1-w;
			else ans+=a[e], e=1-e;

		}

		cout<<ans<<'\n';
	}
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