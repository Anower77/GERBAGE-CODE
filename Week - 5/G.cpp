#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll n,c; cin>>n>>c;
        vector<ll> v(n),  a(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            a[i] = v[i]+i+1;
        }

        sort(a.begin(), a.end());

        int ans{0};
        for(ll x: a)
        {
            if(c<x) break;
            c -= x;
            ans++;
        }

        cout<<ans<<'\n';
    }

    return 0;
}
