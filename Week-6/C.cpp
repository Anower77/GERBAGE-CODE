#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) 
    {
        ll n,k; cin>>n>>k;
        vector<ll> a(k);
        for(int i=0; i<k; i++) cin >> a[i];
    
        sort(a.begin(), a.end());

        ll c=0, ans=0;
        for(int i=k-1; i>=0; i--) 
        {
            ll stick = a[i];
            if(stick <= c) break;

            ll d = n - stick;
            c += d;
            ans++;
        }
        cout <<ans<< "\n";
    }
    return 0;
}
