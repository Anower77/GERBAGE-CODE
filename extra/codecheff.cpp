#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



bool solve(vector<ll>& a)
{
    ll n=a.size();
    if(n<2) return false;
    
    sort(a.begin(), a.end());
    ll mn1 = a[0], mn2 = a[1];

    for(auto x:a)
    {
        if(x%mn1 != 0 and x%mn2 != 0) return false;
    }
    return true;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> a(n);
        for (ll i=0; i<n; i++) cin>>a[i];

        if(solve(a)) cout<<"Yes\n";
        else cout<<"No\n";


    }


    return 0;
}