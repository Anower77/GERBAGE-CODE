#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	string s; cin>>s;
	ll n = s.size();
	ll pc=0;


	for(int i=1; i<n; i++)
	{
		if(s[i]==s[i-1]) 
		{
			pc++;
			i++;
		}
	}

	if(pc%2 == 1) cout<<"YES\n";
	else cout<<"NO\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t; cin>>t;
    // while(t--)
    {
    	solve();
    }


    return 0;
}