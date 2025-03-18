#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
    ll n,m,x=1; cin>>n>>m;

    while(true)
    {
        ll a = n/x;
        ll b = (a+1)/2;

        if(m<=b)
        {
            ll odd = (2*m)-1;
            cout<< odd*x <<'\n';
            return;
        }
        else
        {
            m-=b;   
            x*=2;
        }
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