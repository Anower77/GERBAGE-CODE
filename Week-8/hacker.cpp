#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll a,b; cin>>a>>b;
	if(b==0)
	{
		cout<<-1<<'\n';
	}
	else
	{
		int rem = a%b;
		cout<<rem<<'\n';
	}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();

    }


    return 0;
}