#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


// void solve()
// {
// 	int n; cin>>n;
// 	int ans = fact(n);
// 	cout<< ans << '\n';
// }


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;

    map<ll,ll> mp;
    mp[1] = 1;
    for(ll i=2; i<= 1e18+10; i=i*2)
    {
    	mp[i] = mp[i/2] * 2+1;
    }

    while(t--) 
    {
	    ll n; cin>>n;
	    ll ans=0, i=0;
    	
    	while(n> 0)
    	{
    		if(n%2 ==1) ans+=mp[pow(2,i)];
    		i++;
    		n=n/2;
    	}

    	cout<< ans <<'\n';

    }
    return 0;
}