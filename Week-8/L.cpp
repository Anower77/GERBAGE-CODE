#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	int a, b; cin>>a>>b;

	if(a==b)
	{
		cout<<"="<<'\n';
	}
	else if(a==1)
	{
		cout<<"<"<<'\n';
	}
	else if(b==1)
	{
		cout<<">"<<'\n';
	}
	else
	{
		ll l= b* log(a);
		ll r= a* log(b);

		if(l<r)
		{
			cout<<"<"<<'\n';
		}
		else if(l>r)
		{
			cout<<">"<<'\n';
		}
		else
		{
			cout<<"="<<'\n';
		}
	}
	
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();


    return 0;
}