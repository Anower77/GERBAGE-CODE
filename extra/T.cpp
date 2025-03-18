#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k; cin>>n>>m>>k;

    vector<ll> arr(m+1);
    for(int i=0; i<=m; i++) cin>>arr[i];

    ll cnt=0, ans =0;
    for(int i=0; i<m; i++)
    {
        ans= arr[i] ^ arr[m];
        int c=0;

        while(ans != 0)
        {
            ans= ans & (ans-1);
            c++;

        }

        if(c <= k) cnt++;
    }

    cout<<cnt<<'\n';
    return 0;
}