#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        int n, q; cin >> n >> q;
        vector<ll> arr1(n);
        for (int i = 0; i < n; i++) cin >> arr1[i];

        vector<ll> arr2(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            arr2[i + 1] = (arr1[i] + arr2[i]);
        }


        vector<ll> ans(q);
        vector<pair<ll, ll>> a(q);


        for (int i = 0; i < q; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }


        sort(a.begin(), a.end());
        int ap = 0;
        for (int i = 0; i < q; i++)
        {
            while (ap < n && arr1[ap] <= a[i].first)
            {
                ap++;
            }


            ans[a[i].second] = arr2[ap];
        }

        for (int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
