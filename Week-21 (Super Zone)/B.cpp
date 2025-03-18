#include "bits/stdc++.h"
#include "testlib.h"
#define ll long long
using namespace std;
const ll N = 1e5+5;

void solve()
{
        int n,m,q,x,y,p, ans; 
        cin>>n>>m>>q>>x>>y>>p;
        int mn = min(x,y), mx = max(x,y);

        if(p < mn) ans = mn -1;
        else if(p > mx) ans = n-mx;
        else
        {
            int mid = (x+y)/2;
            ans = min(abs(mid - x), abs(mid - y));
        }
        cout<< ans <<'\n';

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}
