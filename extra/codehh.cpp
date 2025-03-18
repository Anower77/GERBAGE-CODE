#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


bool solve(vector<ll>& a)
{
    ll n = a.size();
    sort(a.begin(), a.end());

    ll f = a[0];
    ll s = -1;

    for(int i=1; i<n; i++)
    {
        if(a[i] != f)
        {
            s = a[i];
            break;
        }
    }
    if(s==-1) return false;

    for(int i=0; i<n; i++)
    {
        if((a[i]%f != 0) and (a[i]%s != 0)) return false;
    }

    return true;

}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        if(solve(a)) cout<<"Yes\n";
        else cout<<"No\n";

    }


    return 0;
}