#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long 
#define pi pair<ll,ll> 
using namespace std;
const ll N = 1e5+5;

template <typename T> 
using PDBS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n,k; cin>>n>>k;
    priority_queue<pi> l;
    priority_queue<pi,vector<pi>, greater<pi>> r;
    
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll m = (k+1)/2, b=0, lsum=0, rsum=0;
    for(int i=0; i<n; i++)
    {

        while(!r.empty() and r.top().second <= i-k) r.pop();
        while(!l.empty() and l.top().second <= i-k) l.pop();
    
        if(b<m)
        {
            r.push({a[i], i});
            rsum += a[i];
        
            l.push(r.top());
            lsum += r.top().first;

            rsum -= r.top().first;
            r.pop();
            b++;
        }
        else
        {
            l.push({a[i], i});
            lsum += a[i];

            r.push(l.top());
            rsum += l.top().first;

            lsum -= l.top().first;
            l.pop();
        }


        while(!r.empty() and r.top().second <= i-k) r.pop();
        while(!l.empty() and l.top().second <= i-k) l.pop();
    
        if(i<k-1) continue;
        int med = l.top().first;

        cout<< (m*med - lsum + rsum - (k-m)*med) <<' ';

        if(a[i-k+1] <= l.top().first)
        {
            b--;
            lsum -= a[i-k+1];
        }
        else rsum -= a[i-k+1];

    }
    cout<<'\n';
    
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t; cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}