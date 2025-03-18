#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	string s; cin>>s;
	for(int i=1; s<s.size(); i++)
	{
		if(s[i] != s[i-1])
		{
			swap(s[i], s[i-1]);
			cout<<"YES\n" << s << '\n';
			return;
		}
	}

	cout<< "NO\n";
}

int main()
{
    ios::sync_with.stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	solve();

    }


    return 0;
}