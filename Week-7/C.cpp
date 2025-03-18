#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int diff = -1, zero_diff = -1;
        bool flag = false;

        for(int i=0; i<n; i++) 
        {
            if(a[i] < b[i])
            {
                flag = true;
                break;
            }
            
            if(b[i] != 0)
            {
                if(diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {
                    if(a[i] - b[i] != diff)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                zero_diff = max(zero_diff, a[i] - b[i]);
            }
        }

        if(flag) 
        {
            cout << "NO\n";
            continue;
        }

        if(diff==-1 or zero_diff<=diff)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
