#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,l,r,x;
    vector<int> a(N);

    while(cin>>n>>l>>r>>x)
    {
        for(int i=0; i<n; i++) cin>>a[i];
        int ans=0;

        for(int i=0; i<(1<<n); i++)
        {
            int mx=-1;
            int mn=1000000;
            int sum=0;
            for(int j=0; j<n; j++)
            {
                if(i&(1<<j))
                {
                    sum+=a[j];
                    mx=max(mx,a[j]);
                    mn=min(mn,a[j]);
                }
            }
            if(l<=sum && sum<=r && (mx-mn)>=x) ans++;
        }
        
        cout<<ans<<endl;

    }


    return 0;
}