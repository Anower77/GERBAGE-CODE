#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve() 
{
    ll n; cin>>n;
    vector<ll> a(n - 1);
    ll mx = 0;
    bool ok = 0;


    for(auto &it: a) 
    {
        cin >> it;
        if(it <= mx) ok = 1;
        mx = max(mx, it);
    }

    if((mx > (n * (n + 1) / 2)) or ok) 
    {
        cout << "NO\n";
        return;
    }

    map<ll, ll> mp;
    if(a[a.size() - 1] != (n * (n + 1) / 2))
    {
        if(a[0] <= 0 or a[0] > n) 
        {
            cout << "NO\n";
            return;
        }

        a.push_back(n * (n + 1) / 2);
        mp[a[0]] = 1;
        bool ok = 1;
        for(int i = 1; i < n; i++) 
        {
            ll num = a[i] - a[i - 1];
            if(num <= 0 or num > n or mp.count(num) != 0) 
            {
                cout << "NO\n";
                ok = 0;
                break;
            } 
            else 
            {
                mp[num] = 1;
            }
        }

        if(ok and mp.size() != n) 
        {
            cout << "NO\n";
        } 
        else if(ok and mp.size() == n) 
        {
            cout << "YES\n";
        }
    } 
    else 
    {
        ll sum = n * (n + 1) / 2;
        vector<ll> tmp;

        for(int i=1 ; i<a.size(); i++) 
        {
            ll num = a[i] - a[i - 1];
            if(mp.count(num) == 0 and num > 0 and num <= n) 
            {
                mp[num] = 1;
                sum -= num;
            } 
            else 
            {
                tmp.push_back(num);
            }
        }

        if(tmp.size() == 0 and mp.size() == n - 2 and sum == a[0]) 
        {
            cout << "YES\n";
        } 
        else if(tmp.size() == 1 and mp.size() == n - 3) 
        {
            if(mp.count(a[0]) == 1 or a[0] > n || a[0] <= 0)
            {
                cout << "NO\n";
            } 
            else if(sum - a[0] == tmp[0]) 
            {
                cout << "YES\n";
            }
        }
        else 
        {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--) 
    {
        solve();
    }

    return 0;
}
