#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> res(33);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            for(int j = 0; j < 32; j++)
            {
                if(a[i] & (1 << j))
                {
                    res[j]++;
                }
            }
        }

        vector<int> ans;
        for(int i = 1; i <= n; i++)
        {
            bool ok = true;
            for(int j = 0; j < 32; j++)
            {
                if(res[j] % i != 0)
                {
                    ok = false;
                    break;
                }
            }

            if(ok)
            {
                ans.push_back(i);
            }
        }

        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
