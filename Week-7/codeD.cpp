#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	string s; cin>>s;
	int n=s.size();
	int cnt=1;
	int tar=0;

	for(int i=1; i<n; i++)
	{
		if(s[i]==s[i-1])
		{
			continue;
		}
		else
		{
			cnt++;
		}

		if(s[i-1]=='0' and s[i]=='1')
		{
			tar=1;
		}
	}

	cout<<(cnt-tar)<<'\n';

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