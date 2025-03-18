#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	string s; cin>>s;
	int n = s.size();

	vector<ll> a,b;
	vector<bool> flg(n+2, true);


	for(int i=0; i<n; i++)
	{
		if(s[i]=='b')
		{
			if(!b.empty())
			{
				flg[b.back()] = false;
				b.pop_back();
			}
			flg[i] = false;
		}
		else if(s[i]=='B')
		{
			if(!a.empty())
			{
				flg[a.back()] = false;
				a.pop_back();
			}
			flg[i] = false;
		}
		else if(s[i]>='A' and s[i]<='Z')
		{
			a.push_back(i);
		}
		else
		{
			b.push_back(i);
		}
	}

	for(int i=0; i<n; i++)
	{
		if(flg[i]) cout<<s[i];
	}
	cout<<'\n';
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