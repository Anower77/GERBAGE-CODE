#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
    ll n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll res =0;
    for(int i=1; i<=n; i*=2)
    {
        vector<int> tmp;

        for(int j=1; j<a.size(); j+=2)
        {
            if(a[j-1] > a[j]) swap(a[j-1], a[j]), res++;
            if(a[j] - a[j-1] != i)
            {
                cout<<"-1\n";
                return;
            }

            tmp.push_back(a[j]);
        }
        a = tmp;
    }
    cout<< res <<'\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}