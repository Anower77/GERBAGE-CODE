#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

ll prime(ll n)
{
	for(ll i=2; i*i<=n; i++)
	{
		if(n%i == 0) return i;
	}
	return n;
}



void solve()
{
	ll l,r; cin>>l>>r;
	if(l<=3 and r<=3)
	{
		cout<<-1<<'\n';
		return;
	}
	if(r-l >= 1)
	{
		if(r%2) r--;
		cout<< r/2 << " " << r/2 << '\n';
		return;
	}

	if(prime(l)==l)
	{
		cout<<-1<<'\n';
		return;
	}
	else
	{
		cout<<prime(l)<<" "<<l-prime(l)<<'\n';
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