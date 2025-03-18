#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5 + 5;

void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    vector<ll> a(n), b(n);
    for (int i=0; i<n; i++) cin>>a[i]>>b[i];

    vector<ll> ans(n);
    vector<ll> x(n, -1), y(n, -1);

    for (int i = 0; i < n; i++) {
        if (a[i] == 0 && b[i] == 0) ans[i] = 0;
        else ans[i] = 1e9;

        if (a[i]) x[a[i] - 1] = i;
        if (b[i]) y[b[i] - 1] = i;
    }

    set<pair<ll, ll>> st;
    for (int i = 0; i < n; i++)
        st.insert({ans[i], i});

    while (!st.empty()) {
        auto it = st.begin();
        ll tt = it->first;
        ll i = it->second;
        st.erase(it);

        if(tt > ans[i]) continue;

        if (x[i] != -1) 
		{
            if (s[x[i]] == 'L') 
			{
                if (ans[x[i]] > tt) 
				{
                    ans[x[i]] = tt;
                    st.insert({ans[x[i]], x[i]});
                }
            } 
			else 
			{
                if (ans[x[i]] > tt + 1) 
				{
                    ans[x[i]] = tt + 1;
                    st.insert({ans[x[i]], x[i]});
                }
            }
        }

        if (y[i] != -1) 
		{
            if (s[y[i]] == 'R') 
			{
                if (ans[y[i]] > tt) 
				{
                    ans[y[i]] = tt;
                    st.insert({ans[y[i]], y[i]});
                }
            } 
			else 
			{
                if (ans[y[i]] > tt + 1)
				{
                    ans[y[i]] = tt + 1;
                    st.insert({ans[y[i]], y[i]});
                }
            }
        }
    }

    cout << ans[0] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while (t--) 
	{
        solve();
    }

    return 0;
}
