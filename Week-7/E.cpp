#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve() 
{
    int n; cin >> n;
    string s; cin >> s;
    int ans = INT_MAX;

    for (char i='a'; i<='z'; i++) 
    {
        int c=0, l=0, r=n - 1;

        while (l <= r) 
        {
            if (s[l] != s[r]) 
            {
                if (s[l] != i && s[r] != i) 
                {
                    c = INT_MAX;
                    break;
                }
                if (s[l] == i) l++;
                if (s[r] == i) r--;
                c++;
            } 
            else 
            {
                l++, r--;
            }
        }


        ans = min(ans, c);
    }


    if (ans == INT_MAX) cout << -1 << '\n';
    else cout << ans << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
