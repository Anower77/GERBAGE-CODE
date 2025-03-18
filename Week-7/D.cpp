#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve() 
{
    int n; cin >> n;

    vector<int> arr(n);
    vector<bool> ispre(n + 1, false);
    priority_queue<int, vector<int>, greater<int>> extra; 

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];

        if (arr[i] <= n) 
        {
            if (ispre[arr[i]])
                extra.push(arr[i]);
            else
                ispre[arr[i]] = true;
        }
        else 
        {
            extra.push(arr[i]);
        }
    }



    int ans = extra.size();

    if (ans == 0) 
    {
        cout << ans;
        return;
    }

    

    for (int i=1; i<=n; i++) 
    {
        if (ispre[i]) continue;

        int curr = extra.top(); 
        extra.pop(); 

        int p = (curr - 1) / 2;

        if (i > p) 
        {
            cout << -1;
            return;
        }
    }

    cout << ans;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) 
    {
        solve();
        cout<<'\n';
    }

    return 0;
}
