#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const int N = 100005;


void solve()
{
    ll n,m,k; cin>>n>>m>>k;
    string s; cin>>s;

    vector<bool> vis(n+2, false);
    queue<pair<ll,ll>> q;

    p.push({0,0});
    vis[0]=true;
    bool ok = false;

    while(!ok an !q.empty())
    {
        ll p = q.front().first;
        ll sw = q.front().second;
        q.pop();


        if(p==0 or s[p-1]=='L')
        {
            for(int j=1; j<=m; j++)
            {
                ll np = p+j;
                if(np == n+1)
                {
                    ok = true;
                    break;
                }

                if(np<= n and s[np-1] != 'C' and !vis[np])
                {
                    vis[np] = true;
                    q.push({np, sw});
                }
            }
        }



        if(p>0 and p<=n and s[p-1]=='W' and sw<k)
        {
            ll np = p+1;
            if(np== n+1)
            {
                ok = true;
                break;
            }

            if(np<= n and s[np-1] != 'C' and !vis[np])
            {
                vis[np]=true;
                q.push({np, sw+1});
            }
        }
    }

    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}