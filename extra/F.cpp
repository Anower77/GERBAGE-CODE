#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin>>t;  
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        ll ans=0; 
        for(int i=30; i>=0; i--)
        {
            ll cnt=0;
            for (int j=0; j<n; j++)
            {
                if(a[j] >= pow(2,i) and a[j] < pow(2,(i+1)))
                {
                    cnt++;
                }
            }
            ans += (cnt*(cnt-1))/2; 
        }
        cout<<ans<<'\n';
    }

    
    return 0;
}
