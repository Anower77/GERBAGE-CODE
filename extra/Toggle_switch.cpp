#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

ll cnt(ll n)
{
    return sqrt(n);
}


void solve()
{
	ll n; cin>>n;
    ll bul = cnt(n);
    cout<< bul <<'\n';
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