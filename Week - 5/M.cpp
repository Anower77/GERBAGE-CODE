#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	ll a,b,n,s; cin>>a>>b>>n>>s;
    	ll r = s%n;

    	if(r<=b and (a*n+b)>=s)
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}

    }


    return 0;
}