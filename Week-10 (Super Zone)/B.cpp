#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
    set<pair<int, int>> jores, jomo;
    
    int n; cin>>n;
    for(int i=0 ;i<n; i++)
    {
        int x; cin>>x;
        int s=0;

        if(x==1)
        {
            int m; cin>>m;
            jores.emplace(s,m);
            jomo.emplace(-m,s);
            s++;
        }
        else if(x==2)
        {
            auto it = jores.begin();
            
            cout<<it.first + 1<<" ";
            jores.erase({-it.second, it.first});
            jomo.erase(it);
        }
        else if(x==3)
        {
            auto it = jomo.begin();
            
            cout<<it->second + 1<<" ";
            jores.erase({it.second, -it.first});
            jomo.erase(it);
        }

        cout<<'\n';
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