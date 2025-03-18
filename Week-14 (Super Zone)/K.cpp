#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve() 
{
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    vector<ll> v;

    for (int i=0; i<n; i++) 
	{
        if (s[i] == '1') v.push_back(i + 1);
    }

    ll c = 0;
    if (v.size() == 0) 
	{
        for(int i=0; i<n; i+=(k + 1)) c++;
    } 
	else 
	{
        ll x = v[v.size() - 1] + (k + 1);
        for(int i=x; i<=n; i+=(k + 1)) c++;

        ll y = v[0] - (k + 1);
        for(int i=y; i>=1; i-=(k + 1)) c++;

        ll ft, sd, df;
        for(int i=0; i<v.size()-1; i++) 
		{
            ft = v[i];
            sd = v[i + 1];
            df = sd - ft - 1;
            if(df > 2*k) 
			{
                for(int j=ft + (k+1); j<sd-k; j+=(k + 1)) c++;
            }
        }
    }

    cout << c << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
