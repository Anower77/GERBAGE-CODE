#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n; cin>>n;
	string s; cin>>s;
	string ans;

	if(s[0] != '9')
	{
		for(int i=0; i<n; i++)
		{
			ll x = s[i]-'0';
			ll y = 9 - x;
			ans += (y +'0');
		}
	}
	else
	{
		ll c =0;
		for(int i=n-1; i>=0; i--)
		{
			ll x = s[i]-'0' + c;
			// x += c;
			if(x>1)
			{
				ll y = 11 - x;
				c = 1;
				ans += (y+'0');
			}
			else
			{
				c = 0;
				ll y = 1 - x;
				ans += (y+'0');
			}
		}
		reverse(ans.begin(), ans.end());
	}
	cout<< ans << '\n';
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