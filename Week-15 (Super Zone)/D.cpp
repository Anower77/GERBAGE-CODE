#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


ll cal(ll n)
{
	ll c=0;
	while(n>0) n=n/2, c++;
	return c;
}

void solve()
{
	string s; cin>>s;
	ll n=s.size();
	ll ans=n;

	for(int i=0; i<26; i++)
	{
		char ch=('a'+i);
		ll len=0, res=0;

		for(int j=0; j<n; j++)
		{
			if(s[j]==ch)
			{
				res = max(res, len);
				len=0;
			}
			else len++;
		}
		res = max(res, len);
		ans = min(ans, res);
	}

	ll fn = cal(ans);
	cout<< fn << '\n';
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